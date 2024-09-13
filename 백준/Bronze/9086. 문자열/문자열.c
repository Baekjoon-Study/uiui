#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

int main ()
{
    int t;
    scanf("%d",&t);

    for (int i=0;i<t;i++)
    {
        char sentence[1001];
        scanf("%s",sentence);
        int n=strlen(sentence);
        if (n>0) printf("%c%c\n",sentence[0],sentence[n-1]);
    }
    return 0;
}