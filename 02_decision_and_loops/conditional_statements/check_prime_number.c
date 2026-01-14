// WAP to print all factors of a number and check whether it is prime or not
#include <stdio.h>

int main() {
    int number, i;
    int factorCount = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factors of %d are: ", number);

    for (i = 1; i * i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
            factorCount++;

            if (i != number / i) {
                printf("%d ", number / i);
                factorCount++;
            }
        }
    }

    printf("\n");

    if (factorCount == 2) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is a composite word.\n", number);
    }

    return 0;
}

