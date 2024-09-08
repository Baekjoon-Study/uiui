#include <stdio.h>

int main ()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int ages[n];
    for (int i=0;i<n;++i) scanf("%d ",&ages[i]);

    for (int j=0;j<n;++j)
    {
        if (ages[j]<x) printf("%d ",ages[j]);
    }
    return 0;
}