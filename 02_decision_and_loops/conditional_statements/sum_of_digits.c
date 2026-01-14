#include <stdio.h>
int main()
{
    int num, remainder, result = 0;
    int sign = 1;

    printf("Enter a number:\n");
    scanf("%d", &num);

    // This ensures the digits are always positive.

    if (num < 0)
    {
        sign = -1;
        num = -num;
    }

    while (num != 0)
    {
        remainder = num % 10;
        result = result + remainder;
        num = num / 10;
    }

    printf("The sum of digits is %d\n", result);
    return 0;
}