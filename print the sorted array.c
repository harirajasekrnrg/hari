#include<stdio.h>
int main()
{
    int a,b,j,d[100],i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    scanf("%d",&d[i]);
    for(i=0;i<a;i++)
    {
        for(j=j+1;j<a;j++)
        if(d[i]>d[j])
        {
            b=d[i];
            d[i]=d[j];
            d[j]=b;
        }
        for(i=0;i<a;i++)
        printf("%d",d[i]);
    }
}
