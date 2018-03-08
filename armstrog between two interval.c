#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,t1,n=0,s=0,r,i,t2;
    scanf("%d %d",&a,&b);
    for( i=a+1;i<b;i++)
    t1=i;t2=i;
    while(t1!=0)
    {
        t1=t1/10;
        n++;
    }
    while(t2!=0)
    {
      r=t2%10;
      s=s+pow(r,n);
      t2=t2/10;
    }
if(s==i)
{
    printf("%d",s);
}
//then
n=0;
s=0;
}
