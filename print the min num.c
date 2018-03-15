#include<stdio.h>
void main()
{
    int a[10],b,i,c,d;
    
    scanf("%d",&b);
    for(i=0;i<b;i++)
    scanf("%d",&a[i]);
    c=a[0];
    for(i=0;i<b;++i)
    if(c<a[i])
    {
        d=c;
        
    }
printf("minimum number is:%d",d);
}
