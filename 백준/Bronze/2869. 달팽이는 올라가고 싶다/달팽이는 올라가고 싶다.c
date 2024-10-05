#include <stdio.h>

int main (void)
{
    int day,night,goal;

    scanf("%d %d %d",&day,&night,&goal);

    int days=(goal-night-1)/(day-night)+1;

    printf("%d",days);
    return 0;
}