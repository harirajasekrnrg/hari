#include<stdio.h>
void main()
{
    int a[100],b,i,c,d;
 
    scanf("%d",&b);
      for(i=0;i<b;i++)
       scanf("%d",&a[i]);
  
    c=a[0];
    
    
    if(a[i]>c)
    for(i=1;i<b;i++)
    {
        d=a[i];
       
        c=c+1;
    }
printf("%d",d);
}
