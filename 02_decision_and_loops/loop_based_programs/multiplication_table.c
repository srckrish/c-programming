#include <stdio.h>
int main()
{
    int number, i, result;

    printf("Enter a number:\n");
    scanf("%d", &number);

    for (i = 1; i <= 10; i++)
    {
        result = number * i;
        printf("%d x %d = %d\n", number, i, result);
    }

    return 0;
}