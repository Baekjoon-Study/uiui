#include <stdio.h>

int main (void)
{
    int num;

    while (1)
    {
        scanf("%d",&num);
        if (num==-1) break;

        int array[1000]={0};
        int sum=0;
        int count=0;

        for (int i=1 ; i<num ; i++) {
            if (num%i==0) {
                sum+=i;
                array[count]=i;
                count++;
            }
        }

        if (num==sum) {
            printf("%d = %d",num,array[0]);
            for (int i=1 ; i<count; i++) printf(" + %d",array[i]);
            printf("\n");
        }
        else printf("%d is NOT perfect.\n",num);
    }
    
    return 0;
}