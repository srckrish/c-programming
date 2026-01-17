#include <stdio.h>
int main()
{
    int count, i, j;

    printf("Enter the number of counts:\n");
    scanf("%d", &count);

    for (i = 1; i <= count; i++)
    {
        for (j = 1; j <= count - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
