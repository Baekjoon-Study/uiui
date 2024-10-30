#include <stdio.h>

int main (void)
{
    int x,y,w,h;
    scanf("%d %d %d %d",&x,&y,&w,&h);

    int smallest=x;
    if (smallest>y) smallest=y;
    if (smallest>(w-x)) smallest=w-x;
    if (smallest>(h-y)) smallest=h-y;

    printf("%d",smallest);
    
    return 0;
}