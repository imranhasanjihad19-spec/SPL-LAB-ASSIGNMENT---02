#include <stdio.h>

int main()
{
    float a, b;
    char op;

  
    scanf("%f", &a);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    
    scanf("%f", &b);

    switch (op)
    {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;

        case '-':
            printf("Result = %.2f\n", a - b);
            break;

        case '*':
            printf("Result = %.2f\n", a * b);
            break;

        case '/':
            if (b != 0)
            {
                printf("Result = %.2f\n", a / b);
            }
            else
            {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid Operator!\n");
    }

    return 0;
}