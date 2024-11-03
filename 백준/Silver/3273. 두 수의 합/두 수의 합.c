#include <stdio.h>
#include <stdlib.h>

int compare (const void* a, const void* b)
{
    int int_a = *(int*)a;
    int int_b = *(int*)b;
    if (int_a>int_b) return 1;
    else if (int_a<int_b) return -1;
    else return 0;
}

int main (void)
{
    int num;
    scanf("%d",&num);

    int array[num];
    for (int i=0 ; i<num ; i++) scanf("%d",&array[i]);
    
    int* ptr=array;
    qsort(ptr,num,sizeof(int),compare);

    int start=0;
    int end=num-1;

    int target;
    scanf("%d",&target);

    int count=0;
    while(start<end)
    {
        int sum=ptr[start]+ptr[end];
        if (sum==target) {count++; start++; end--;}
        else if (sum<target) start++;
        else end--;
    }

    printf("%d",count);

    return 0;
}