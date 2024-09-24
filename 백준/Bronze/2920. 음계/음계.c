#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main ()
{
    int arr[8];
    for (int i=0 ; i<8 ; i++) scanf("%d",&arr[i]);

    int check=0;
    for (int i=0 ; i<8 ; i++)
    {
        if ((arr[i]==i+1) && (arr[i+1]==arr[i])+1) check++;
        if ((arr[i]==8-i) && (arr[i+1]==arr[i]-1)) check--;
    }

    if (check==8) printf("ascending");
    else if (check==-7) printf("descending");
    else  printf("mixed");

    return 0;        
}