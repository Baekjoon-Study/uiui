#include <stdio.h>

int main () {
    int h,m,t;
    scanf("%d %d\n",&h,&m);
    scanf("%d",&t);
    h+=((m+t)/60);

    if (h>23) h-=24;

    printf("%d %d",h,(m+t)%60);

    return 0;
}