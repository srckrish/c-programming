#include <stdio.h>
int main()
{
    int count, i, j;

    printf("Enter the number of counts:\n");
    scanf("%d", &count);

    for (i = 1; i <= count; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
