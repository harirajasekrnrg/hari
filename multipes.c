#include<stdio.h>
void main()
{
    int a,b,i=1;
    scanf("%d",&a);
    while(i<=a)
    {
    b=i*a;
    printf("\n%d",b);
    i++;
    }
    printf("%d",b);
}
