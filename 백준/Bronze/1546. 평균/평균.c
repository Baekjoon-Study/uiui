#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main ()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for (int i=0;i<n;i++) scanf("%d",&arr[i]);

    int max=arr[0];
    for (int i=1;i<n;i++)
    {
        if (max<arr[i]) max=arr[i];
    }

    float sum=0;
    for (int i=0;i<n;i++) sum+=(float)arr[i]/max*100;

    float a=(float)sum/n;
    printf("%f",a);

    return 0;
}