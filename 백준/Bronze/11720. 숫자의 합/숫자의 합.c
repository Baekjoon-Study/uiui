#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

int main ()
{
    int n;
    scanf("%d",&n);

    char num[n+1];
    scanf("%s",num);

    int sum = 0;
    for (int i=0;i<n;i++) sum+=(int)num[i]-48;

    printf("%d",sum);

    return 0;
}