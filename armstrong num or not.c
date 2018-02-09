#include<stdio.h>
main()
{
    int a,b,c=0,d;
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
    d=b%10;
    c=c+(d*d*d);
    b=b/10;
    }
    if(c==a)
    printf("armstrong num");
    else
    printf("not armstrong num");
}
