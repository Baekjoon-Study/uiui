#include <stdio.h>
#include <string.h>

int main (void)
{
    int num;
    scanf("%d",&num);

    int x=1;
    for (int i=0 ; i<num-1 ; i++) x*=2;
    int y=2;
    for (int i=1 ; i<=x ; i=i*2) y+=i;

    int dot=y*y;
    printf("%d",dot);
    
    return 0;
}