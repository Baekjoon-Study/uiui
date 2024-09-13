#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

int main ()
{
    char s[101];
    scanf("%s",s);

    int arr[26];
    for (int i=0;i<26;i++) arr[i]=-1;
    
    for (int i=0;i<strlen(s);i++)
    {
        int index=(int)s[i]-97;
        if (arr[index]!=-1) continue;
        else arr[index]=i;
    }

    for (int i=0;i<26;i++) printf("%d ",arr[i]);

    return 0;
}