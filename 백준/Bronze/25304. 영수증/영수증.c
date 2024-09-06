#include <stdio.h>

int main ()
{
    int x,n,sum,a,b;
    scanf("%d\n",&x);
    scanf("%d\n",&n);
    sum=0;

    for (int i=0;i<n;++i)
    {
        scanf("%d %d",&a,&b);
        sum+=a*b;
    }

    if (sum==x) printf("Yes");
    else printf("No");

    return 0;
}