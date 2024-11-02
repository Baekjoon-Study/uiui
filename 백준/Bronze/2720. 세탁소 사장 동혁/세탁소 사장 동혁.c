#include <stdio.h>

int main (void)
{
    int num;
    scanf("%d",&num);
    int change_array[4]={0};

    for (int i=0 ; i<num ; i++) {
        int change;
        scanf("%d",&change);
        int quarter=change/25;
        change%=25; change_array[0]=quarter;
        int dime=change/10;
        change%=10; change_array[1]=dime;
        int nickel=change/5;
        change%=5; change_array[2]=nickel;
        int penny=change/1;
        change&=1; change_array[3]=penny;

        for (int j=0 ; j<4 ; j++) printf("%d ",change_array[j]);
    }
    return 0;
}