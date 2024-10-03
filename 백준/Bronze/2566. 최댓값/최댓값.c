#include <stdio.h>

int main (void)
{
    int array[9][9];
    for (int i=0 ; i<9 ; i++) {
        for (int j=0 ; j<9 ; j++) {
            scanf("%d",&array[i][j]);
        }
    }

    int maxNum=array[0][0];
    int loc1=1;
    int loc2=1;

    for (int i=0 ; i<9 ; i++) {
        for (int j=0 ; j<9 ; j++) {
            if (maxNum<array[i][j]) {
                maxNum=array[i][j];
                loc1=i+1;
                loc2=j+1;
            }
        }
    }
    printf("%d\n%d %d",maxNum,loc1,loc2);
    return 0;
}