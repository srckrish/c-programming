#include <stdio.h>

long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int num;
    long long result;

    printf("Enter a number:\n");
    scanf("%d", &num);

    result = factorial(num);

    printf("Factorial of %d is %lld\n", num, result);

    return 0;
}
