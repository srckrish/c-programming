#include <stdio.h>
int main()
{
    int num, count, i, sum = 0;
    printf("Enter the number of count:\n");
    scanf("%d", &count);

    if (count <= 0)
    {
        printf("Count must be positive.\n");
        return 0;
    }

    for (i = 0; i < count; i++)
    {
        printf("Enter a number:\n");
        scanf("%d", &num);

        sum = sum + num;
    }

    printf("The sum of numbers is %d\n", sum);

    return 0;
}