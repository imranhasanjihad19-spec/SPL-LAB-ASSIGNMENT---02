#include <stdio.h>

int main()
{
    char grade;

    printf("Enter your letter grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    switch (grade)
    {
        case 'A':
            printf("Number Grade = 4.00\n");
            break;

        case 'B':
            printf("Number Grade = 3.00\n");
            break;

        case 'C':
            printf("Number Grade = 2.00\n");
            break;

        case 'D':
            printf("Number Grade = 1.00\n");
            break;

        case 'F':
            printf("Number Grade = 0.00\n");
            break;

        default:
            printf("Invalid Grade\n");
    }

    return 0;
}