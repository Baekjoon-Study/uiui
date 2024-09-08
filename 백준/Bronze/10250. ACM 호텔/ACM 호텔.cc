#include <stdio.h>

int main ()
{
    int t,h,w,n,x,y;
    scanf("%d",&t);

    for (int i=0;i<t;++i)
    {
        scanf("%d %d %d",&h,&w,&n);
        x=n%h;
        if (x==0) 
        {
            x=h;
            y=n/h;
        }
        else 
        {
            x=n%h;
            y=n/h+1;
        }
        printf("%d%02d\n",x,y);
    }
    return 0;
}