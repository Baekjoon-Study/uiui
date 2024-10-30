#include <stdio.h>
#include <string.h>

int main (void)
{
    int num;
    scanf("%d",&num);

    char pattern[50];
    char sentence[50];

    int i=0;
    while (i<num) 
    {
        if (i==0) scanf("%s",pattern);
        else {
            scanf("%s",&sentence);
            int n=strlen(sentence);
            for (int j=0 ; j<n ; j++) {
                if (pattern[j]!=sentence[j]) pattern[j]='?';
            }
        }
        i++;
    }

    for (i=0 ; i<strlen(pattern) ; i++) printf("%c",pattern[i]);

    return 0;
}