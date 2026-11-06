#include <stdio.h>

int main()
{
    int a, b, c;

    
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a < b && a > c))
    {
        printf("Second largest number = %d\n", a);
    }
    else if ((b > a && b < c) || (b < a && b > c))
    {
        printf("Second largest number = %d\n", b);
    }
    else
    {
        printf("Second largest number = %d\n", c);
    }

    return 0;
}