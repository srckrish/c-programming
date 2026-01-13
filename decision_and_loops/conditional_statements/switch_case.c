#include <stdio.h>
int main()
{
    double num1, num2, result;
    char op;

    printf("Enter the first number:\n");
    scanf("%lf", &num1);

    printf("Enter an operator (+, - , * , /):\n");
    scanf(" %c", &op); // Space skips '\n'

    printf("Enter the second number:\n");
    scanf("%lf", &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %.2lf\n", result); // (.2lf) ->   .2 -> 2 digits after decimal, l -> long (double), f -> floating-point number
        break;

    case '-':
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
        break;

    case '*':
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
        break;

    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        }
        else
        {
            printf("Error: Division by zero!\n");
        }
        break;

    default:
        printf("Error: Invalid operator!\n");
    }

    return 0;
}