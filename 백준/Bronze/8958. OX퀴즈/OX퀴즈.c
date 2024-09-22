#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main (void)
{
    int case_test;
    scanf("%d",&case_test);
    getchar();

    for (int i=0 ; i<case_test ; i++)
    {
        char sentence[80];
        scanf("%s",sentence);
        getchar();

        int score=0;
        int count=0;

        for (int j=0 ; j<strlen(sentence) ; j++)
        {
            if (sentence[j]=='X') count=0;
            else
            {
                count++;
                score+=count;
            }
        }
        printf("%d\n",score);
    }
    return 0;
}