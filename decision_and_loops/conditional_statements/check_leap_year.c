// WAP to check whether a year is leap year.

#include<stdio.h>
int main() {
    int year;
    printf("Enter a year:\n");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0))
    {
        printf("%d is a Leap year.\n", year);
    } else{
        printf("%d is Not a Leap year.\n", year);
    }

    return 0;
}