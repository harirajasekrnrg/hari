#include<stdio.h>
main()
{
    int a,n,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    if(a%i==0)
    {
        n++;
    }
    if(n==2)
    printf("prime num");
    else
    printf("not");
}

