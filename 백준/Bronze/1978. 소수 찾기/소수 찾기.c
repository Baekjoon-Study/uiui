#include <stdio.h>

int main ()
{
    int num;
    scanf("%d",&num);
    int arr[num];

    int count=0;
    for (int i=0 ; i<num ; i++)
    {   
        scanf("%d",&arr[i]);

        int check=0;
        if (arr[i]<2) check=0;
        else
        {
            for (int j=2 ; j<=arr[i] ; j++)
            {
                if (arr[i]%j==0) check++;
            }
        }
        if (check==1) count++;
    }
    printf("%d",count);
    return 0;
}