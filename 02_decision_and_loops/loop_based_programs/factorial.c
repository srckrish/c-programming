#include <stdio.h>
int main()
{
    int num, i, factorial = 1;

    printf("Enter a number:\n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid input. Factorial is defined only for non-negative integers.\n");
    }

    for (i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }

    printf("The factorial of a given number is %d\n", factorial);
    return 0;
}
