#include <stdio.h>

int main (void)
{
    int num;
    scanf("%d",&num);

    int paper[100][100]={{0}};

    for (int i=0 ; i<num ; i++)
    {
        int width,height;
        scanf("%d %d",&width,&height);

        for (int j=width-1 ; j<width+9 ; j++) {
            for (int k=height-1 ; k<height+9 ; k++)
                paper[j][k]=1;
        }
    }

    int area=0;
    
    for (int i=0 ; i<100 ; i++) {
            for (int j=0 ; j<100 ; j++) {
                if (paper[i][j]==1) area++;
        }
    }

    printf("%d",area);
    return 0;
}