#include <stdio.h>

int main (void)
{
    int num_case;
    scanf("%d",&num_case);

    for (int i=0 ; i<num_case ; i++)
    {
        int num;
        scanf("%d",&num);
        int array[num];
        int* ptr=array;
        float sum=0.0;
        for (int j=0 ; j<num ; j++) {
            scanf("%d",&ptr[j]);
            sum+=ptr[j];
        }
        float average = sum/num;

        int count=0;
        for (int j=0 ; j<num ; j++) {
            if (ptr[j]>average) count++;
        }

        float percentage = (float)count/(float)num*100;
        printf("%0.3f%%\n",percentage);
    }
    return 0;
}
