#include <stdio.h>
int main()
{
    int count, i, j;

    printf("Enter the number of counts:\n");
    scanf("%d", &count);

    for (i = count; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}