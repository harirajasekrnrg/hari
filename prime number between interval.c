#include<stdio.h>
main()
{
    int a,b,c,f=0,e;
   
   scanf("%d %d",&a,&b);
 for(c=a;c<b;c++)
   {
       for(e=2;e<=c;e++)
       if((c%e)==0)
       f++;
       break;
   }
   
   
   
   
   if(f==0)
   printf("%d",c);
}
                                                                                                                
                               
