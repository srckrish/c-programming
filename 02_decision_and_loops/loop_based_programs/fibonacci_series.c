#include <stdio.h>
int main()
{
    int num, a = 0, b = 1, c, i;

    printf("Enter the number of terms:\n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid Input: please enter a positive number.\n");
    }

    printf("Fibonacci Series:\n");

    for (i = 1; i <= num; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}