#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main ()
{
    int side1,side2,side3;

    while (1)
    {
        scanf("%d %d %d",&side1,&side2,&side3);

        if (side1==0 && side2==0 && side3==0) break;

        int large=side1;
        int small_1=side2;
        int small_2=side3;

        if (side2>large)
        {
            large=side2;
            small_1=side1;
            small_2=side3;
        }

        if (side3>large)
        {
            large=side3;
            small_1=side1;
            small_2=side2;
        }

        if ((large*large)==(small_1*small_1)+(small_2*small_2))
            printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}