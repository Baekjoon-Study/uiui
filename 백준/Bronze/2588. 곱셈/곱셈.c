#include <stdio.h>

int main ()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);

    printf("%d\n",x*((y%100)%10));
    printf("%d\n",x*((y%100)/10));
    printf("%d\n",x*(y/100));
    printf("%d",x*y);

    return 0;
}