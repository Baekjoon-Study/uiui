#include <stdio.h>

int main (void)
{
    long long int num;
    scanf("%lld",&num);

    int room=1;
    long long int check=1;
    for (long long int i=0 ; i<num ; i++) {
        check+=6*i;
        if (check<num) room++;
    }

    printf("%d",room);
    return 0;
}