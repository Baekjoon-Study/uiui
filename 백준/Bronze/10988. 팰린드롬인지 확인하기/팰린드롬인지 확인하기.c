#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main (void)
{
    char sentence[101];
    scanf("%s",sentence);

    int n = strlen(sentence);

    for (int i=0 ; i<n ; i++)
    {
        if (sentence[i]!=sentence[n-i-1]) 
        {
            printf("0");
            return 0;
        } 
    }
    printf("1");
    return 0;
}