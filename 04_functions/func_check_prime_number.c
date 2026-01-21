#include <stdio.h>

int check_number(int);

int main()
{
    int number;
    printf("Enter a number:\n");
    scanf("%d", &number);

    int result = check_number(number);

    if (result == -1)
    {
        printf("%d is neither prime nor composite.\n", number);
    }

    return 0;
}

int check_number(int n)
{
    int factorCount = 0, i;

    if (n < 2)
    {
        return -1;
    }

    printf("Factors of %d are: ", n);

    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            factorCount++;

            if (i != n / i)
            {
                printf("%d ", n / i);
                factorCount++;
            }
        }
    }

    printf("\n");

    if (factorCount == 2)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is a composite number.\n", n);
    }

    return 0;
}
