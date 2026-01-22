#include <stdio.h>

/* Function to find GCD using Euclidean Algorithm */
int findGCD(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

/* Function to find LCM */
int findLCM(int a, int b)
{
    return (a * b) / findGCD(a, b);
}

int main()
{
    int num1, num2, gcd, lcm;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    gcd = findGCD(num1, num2);
    lcm = findLCM(num1, num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
