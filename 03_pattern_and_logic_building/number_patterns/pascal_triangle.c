#include <stdio.h>

int main()
{
    int rows, i, j, num;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
    {
        num = 1; // first value in every row is 1

        for (j = 0; j <= i; j++)
        {
            printf("%d ", num);

            // calculate next value in row
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
