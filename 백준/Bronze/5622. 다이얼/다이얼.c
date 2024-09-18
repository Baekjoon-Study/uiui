#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main (void)
{
    char dial[16];
    scanf("%s",dial);

    int time=0;
    for (int i=0 ; i<strlen(dial) ; i++)
    {
        if ((dial[i]=='A') || (dial[i]=='B') || (dial[i]=='C')) time += 3;
        else if ((dial[i]=='D') || (dial[i]=='E') || (dial[i]=='F')) time += 4;
        else if ((dial[i]=='G') || (dial[i]=='H') || (dial[i]=='I')) time += 5;
        else if ((dial[i]=='J') || (dial[i]=='K') || (dial[i]=='L')) time += 6;
        else if ((dial[i]=='M') || (dial[i]=='N') || (dial[i]=='O')) time += 7;
        else if ((dial[i]=='P') || (dial[i]=='Q') || (dial[i]=='R') || (dial[i]=='S')) time += 8;
        else if ((dial[i]=='T') || (dial[i]=='U') || (dial[i]=='V')) time += 9;
        else time += 10;
    }
    printf("%d",time);
    return 0;
}   