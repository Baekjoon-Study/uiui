#include <stdio.h>

int main ()
{
    int n,m,a,b,c;
    scanf("%d %d",&n,&m);
    int ages[n];

    for (int k=0;k<n;++k) ages[k]=0;
    
    for (int i=0;i<m;++i)
    {
        scanf("%d %d %d",&a,&b,&c);
        for (int x=a;x<=b;++x) ages[x-1]=c;
    }

    for (int j=0;j<n;++j) printf("%d ",ages[j]);
    return 0;
}