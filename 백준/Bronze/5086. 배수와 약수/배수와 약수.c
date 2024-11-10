#include <stdio.h>

int main (void)
{
    int first_input,second_input;
    while (1)
    {
        scanf("%d %d",&first_input,&second_input);
        if ((first_input==0) && (second_input==0)) break;

        if (first_input%second_input==0) printf("multiple\n");
        else if (second_input%first_input==0) printf("factor\n");
        else printf("neither\n");
    }
    return 0;
}