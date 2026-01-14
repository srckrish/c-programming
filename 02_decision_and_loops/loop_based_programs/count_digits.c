#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);

    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
    }
    printf("Count is %d\n", count);

    return 0;
}