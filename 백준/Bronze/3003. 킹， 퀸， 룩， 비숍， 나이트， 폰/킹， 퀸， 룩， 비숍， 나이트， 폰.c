#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main ()
{
    int arr1[6]={1,1,2,2,2,8};

    int arr2[6];
    for (int i=0;i<6;i++) scanf("%d",&arr2[i]);

    for (int i=0;i<6;i++) arr1[i]-=arr2[i];

    for (int i=0;i<6;i++) printf("%d ",arr1[i]);

    return 0;
}