#include <stdio.h>

int factorial(int);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = factorial(num);

    if (result == -1)
    {
        printf("Invalid input. Factorial is defined only for non-negative integers.\n");
    }
    else
    {
        printf("Factorial = %d\n", result);
    }
    return 0;
}

int factorial(int n)
{
    int i, fact = 1;

    if (n < 0)
    {
        return -1;
    }

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
