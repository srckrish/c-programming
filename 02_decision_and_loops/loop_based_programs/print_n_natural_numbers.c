#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a number:\t");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
