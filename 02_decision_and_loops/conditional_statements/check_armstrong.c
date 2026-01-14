#include <stdio.h>
int main()
{
    int num, remainder, result = 0, original;
    int sign = 1;

    printf("Enter a number:\n");
    scanf("%d", &num);

    original = num;

    if (num < 0)
    {
        printf("Negative numbers cannot be Armstrong numbers.\n");
        return 0;
    }

    while (num != 0)
    {
        remainder = num % 10;
        result = result + (remainder * remainder * remainder);
        num = num / 10;
    }

    printf("%d\n", result);

    if (original == result)
    {
        printf("\nArmStrong Number");
    }
    else
    {
        printf("\nNot an ArmStrong Number");
    }

    return 0;
}
