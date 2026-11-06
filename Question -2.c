#include <stdio.h>

void main()
{
    int a,b,c;
    scanf ("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("A is smallest=%d\n",a);
    }
    else if (b<a && b<c)
    {
        printf("B is smallest=%d\n",b);
    }
    else 
    {
        printf ("C is smallest=%d ",c);
    }
}