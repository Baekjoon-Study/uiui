#include <stdio.h>

int main ()
{
    int n,min,max;
    scanf("%d",&n);
    int ages[n];
    for (int i=0;i<n;++i) scanf("%d ",&ages[i]);

    min=ages[0];
    max=ages[0];

    for (int j=0;j<n;++j)
    {
        if (ages[j]<min) min=ages[j];
        else if (ages[j]>max) max=ages[j];
    }
    printf("%d %d",min,max);
    return 0;
}