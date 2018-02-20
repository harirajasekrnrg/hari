#include <stdio.h>
int main()
{
    int n, a= 0, r, d;

    printf("Enter an integer ");
    scanf("%d", &n);

    a = n;

    while( n!=0 )
    {
        r= n%10;
        a= a*10 + r;
        n /= 10;
    }

    if (d == a)
        printf("%d is a palindrome.", d);
    else
        printf("%d is not a palindrome.", d);
    
 
}
