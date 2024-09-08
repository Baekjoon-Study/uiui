#include <stdio.h>

int main ()
{
    int arr1[10],arr2[10];
    for (int i=0;i<10;++i) scanf("%d",&arr1[i]);

    for (int j=0; j<10;++j) arr2[j]=arr1[j]%42;

    int count,x;
    int c=0;
    for (int k=0;k<10;++k)
    {
        count=0;
        x=arr2[k];
        for (int l=k+1;l<10;++l)
        {
            if (x==arr2[l]) count+=1;
        }
        if (count==0) c+=1;
    }
    printf("%d",c);
    return 0;
}