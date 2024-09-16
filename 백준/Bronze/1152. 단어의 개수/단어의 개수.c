#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main ()
{
    char sentence[1000000];
    scanf("%[^\n]",sentence);

    int count=0;
    int n=strlen(sentence);

    if (n==1 && sentence[0]==' ')
    {
        printf("%d",count);
        return 0;
    }

    for (int i=1 ; i<n-1 ; i++)
    {
        if (sentence[i]==' ') count++;
    }
    printf("%d",count+1);
    return 0;
}