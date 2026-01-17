#include <stdio.h>
int main()
{
    int count, i, j, num = 1;

    printf("Enter the number of counts:\n");
    scanf("%d", &count);

    for (i = 1; i <= count; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}

/*
Output:

Count: 4
1
23
456
78910

*/