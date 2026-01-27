#include <stdio.h>

/* Function declarations */
void add();
void subtract();
void multiply();
void divide();

int main()
{
    int choice;

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add();
            break;

        case 2:
            subtract();
            break;

        case 3:
            multiply();
            break;

        case 4:
            divide();
            break;

        case 5:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}

/* Function definitions */

void add()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
}

void subtract()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Difference = %d\n", a - b);
}

void multiply()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Product = %d\n", a * b);
}

void divide()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b != 0)
        printf("Quotient = %.2f\n", (float)a / b);
    else
        printf("Division by zero is not allowed!\n");
}
