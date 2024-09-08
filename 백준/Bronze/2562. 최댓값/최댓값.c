#include <stdio.h>

int main ()
{
    int max,n;
    int ages[9];

    for (int i=0;i<9;++i) scanf("%d",&ages[i]);

    max=ages[0];
    n=1;
    
    for (int j=0;j<9;++j)
    {
        if (ages[j]>max) 
        {
            max=ages[j];
            n=j+1;
        }
    }
    printf("%d\n%d",max,n);
    return 0;
}