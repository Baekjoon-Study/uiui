#include <stdio.h>

int main ()
{
    int a,b,c,d,e,n;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    n=(a*a+b*b+c*c+d*d+e*e)%10;
    printf("%d",n);
    
    return 0;
}