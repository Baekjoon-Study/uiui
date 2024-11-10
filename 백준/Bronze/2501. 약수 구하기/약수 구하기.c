#include <stdio.h>

int main (void)
{
    int num1,num2;
    int result=0;
    scanf("%d %d",&num1,&num2);

    for (int i=1 ; i<=num1 ; i++) {
        if (num1%i==0) {
            result++;
            if (result==num2) {
                printf("%d",i);
                return 0;
            }
        }
    }

    printf("0");
    return 0;
}