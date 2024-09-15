#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

int main ()
{
    char c;
    scanf("%c",&c);

    int ascii = (int) c;
    printf("%d",ascii);

    return 0;
}