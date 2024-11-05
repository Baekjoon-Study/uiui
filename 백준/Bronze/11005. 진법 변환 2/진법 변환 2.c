#include <stdio.h>
#include <string.h>

int main (void)
{
    long long decimal;
    int num;
    scanf("%lld %d",&decimal,&num);

    char b[101];
    int i=0;
    while (decimal!=0)
    {
        int rest=decimal%num;
        if (10<=rest) b[i]='A'+(rest-10);
        else b[i]='0'+rest;
        i++;
        decimal/=num;
    }
    b[i]='\0';

    int n=strlen(b);
    for (int j=0 ; j<n/2 ; j++) {
        char tmp=b[j];
        b[j]=b[n-j-1];
        b[n-j-1]=tmp;
    }
    printf("%s",b);
    return 0;
}