#include<stdio.h>
int main(){
    int num, reversed = 0, remainder;
    int sign = 1;

    printf("Enter a Number\n");
    scanf("%d", &num);

// This ensures that the remainder is positive and that the sign of the number is applied only after the reversal.

    if (num < 0){
        sign = -1;
        num = -num;
    }
    
    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    printf("The reverse of a number is %d \n", reversed * sign);
    return 0;
}