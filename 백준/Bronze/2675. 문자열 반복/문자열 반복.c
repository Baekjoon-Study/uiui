#include <stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

int main ()
{
    int t;
    scanf("%d",&t);

    for (int i=0 ; i<t ; i++)
    {
        int r;
        char s[21];
        scanf("%d %s",&r,s);
        
        for (int j=0 ; j<strlen(s) ; j++)
        {
            for (int k=0 ; k<r ; k++) printf("%c",s[j]);
        }
        printf("\n");
    } 
    return 0;
}