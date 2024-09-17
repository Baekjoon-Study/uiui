#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main (void)
{
    char first[4],second[4];
    scanf("%s %s",first,second);

    char tmp;
    tmp=first[0];
    first[0]=first[2];
    first[2]=tmp;

    tmp=second[0];
    second[0]=second[2];
    second[2]=tmp;

    for (int i=0 ; i<3 ; i++)
    {
        if ((int)first[i] > (int)second[i])
        {
            printf("%s",first);
            return 0;
        }
        if ((int)first[i] < (int)second[i])
        {
            printf("%s",second);
            return 0;
        }
    }
}