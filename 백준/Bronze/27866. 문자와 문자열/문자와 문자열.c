#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    char sentence[1000];
    int i;

    scanf("%s",sentence);
    scanf("%d",&i);

    printf("%c",sentence[i-1]);

    return 0;
}