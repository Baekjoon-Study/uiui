#include <stdio.h>
#include <string.h>

int main (void)
{
    while (1)
    {
        char num[100000];
        scanf("%s",&num);
        
        if (num[0]=='0') break;

        int check=0;
        int n=strlen(num);
        for (int i=0 ; i<n/2 ; i++) {
            if (num[i]!=num[n-i-1]) check++;
        }

        if (check!=0) printf("no\n");
        else printf("yes\n");
    }
    return 0;
}