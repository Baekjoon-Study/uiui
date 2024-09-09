#include <stdio.h>

int main ()
{
    int arr[30];
    for (int i=0;i<30;++i) arr[i]=i+1;

    int n;
    for (int j=0;j<28;++j)
    {
        scanf("%d",&n);
        arr[n-1]=0;
    }

    for (int k=0;k<30;++k)
    {
        if (arr[k]!=0) printf("%d\n",arr[k]);
    }
    return 0;
}