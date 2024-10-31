#include <stdio.h>

int main (void)
{
    char sentence[1000];
    int num;

    scanf("%s",&sentence);
    scanf("%d",&num);

    char* p=sentence;
    printf("%c",p[num-1]);

    return 0;
}