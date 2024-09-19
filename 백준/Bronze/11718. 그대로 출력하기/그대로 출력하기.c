#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main (void)
{
    char sentence[100];
    while (fgets(sentence,sizeof(sentence),stdin)!= NULL) printf("%s",sentence);
    return 0;
}