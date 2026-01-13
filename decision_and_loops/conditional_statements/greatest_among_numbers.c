#include <stdio.h>
int main()
{
    int count, num, i, greatest;
    printf("Enter the number of counts:\n");
    scanf("%d", &count);

    if (count < 0)
    {
        printf("Invalid Input\n");
        return 0;
    }

    printf("Enter the first number:\n");
    scanf("%d", &greatest);

    for (i = 0; i < count - 1; i++)
    {
        printf("Enter a number:\n");
        scanf("%d", &num);

        if (num > greatest)
        {
            greatest = num;
        }
    }

    printf("The greatest of all is %d\n", greatest);
    return 0;
}