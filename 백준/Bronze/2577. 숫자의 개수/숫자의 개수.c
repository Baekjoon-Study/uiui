#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main (void)
{
    int a,b,c;
    scanf("%d",&a);
    getchar();
    scanf("%d",&b);
    getchar();
    scanf("%d",&c);
    getchar();

    int multi=a*b*c;
    char multi_str[12];
    sprintf(multi_str,"%d",multi);

    int arr[10]={0};
    for (int i=0 ; i<strlen(multi_str) ; i++)
    {
        int n=multi_str[i]-'0';
        arr[n]+=1;
    }

    for (int i=0 ; i<10 ; i++) printf("%d\n",arr[i]);
    return 0;
}