#include <stdio.h>
#include <string.h>

int main (void)
{
    char number[101];
    int b;
    long long result=0;
    scanf("%s %d",number,&b);
    int n=strlen(number);

    for (int i=0 ; i<n ; i++) {
        int x;
        if (('A'<=number[i]) && (number[i]<='Z')) x=number[i]-'A'+10;
        else x=number[i]-'0';
        result=(result*b)+x;
    }
    printf("%lld",result);
    
    return 0;
}