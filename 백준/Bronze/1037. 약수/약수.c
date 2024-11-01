#include <stdio.h>

int main (void)
{
    int num;
    scanf("%d",&num);

    int array[num];
    int* ptr=array;
    for (int i=0 ; i<num ; i++) scanf("%d",&ptr[i]);

    for (int i=0 ; i<num-1 ; i++) {
        int count=0;
        for (int j=0 ; j<num-i-1 ; j++) {
            if (ptr[j]>ptr[j+1]) {
                int tmp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=tmp;
                count++;
            }
        }
        if (count==0) break;
    }

    int total=ptr[0]*ptr[num-1];
    printf("%d",total);    

    return 0;
}