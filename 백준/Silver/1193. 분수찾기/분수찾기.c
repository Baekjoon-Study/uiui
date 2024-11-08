#include <stdio.h>

int main (void)
{
    long long int num;
    scanf("%lld",&num);

    long long int x=1;
    long long int y=1;
    long long int check=1;

    while (num!=1)
    {
        if (x<=y) {
            if ((x==1) && (y==1)) check++;
            y=check;
            x=1; 
            num--; 
            for (int i=0 ; i<check ; i++) {
                if ((y==1)||(num==1)) break;
                x++;
                y--;
                num--;
            }
        }

        else {
            x=check; 
            y=1; 
            num--;
            for (int i=0 ; i<check ; i++) {
                if ((x==1)||(num==1)) break;
                y++;
                x--;
                num--;
            }
        }    
        check++;
    }

    printf("%lld/%lld",x,y);
    return 0;
}