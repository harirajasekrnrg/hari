#include<stdio.h>
void main()
{
    int a,b=0,c,d;
   scanf("%d",&a);
   c=a;
   while(a!=0)
   {
   d=a%10;
   b=b*10+d;
   a=a/10;
}   if(b==c)
 {  
   printf("palindrome");
  } 
  else
  {
   printf("not");
