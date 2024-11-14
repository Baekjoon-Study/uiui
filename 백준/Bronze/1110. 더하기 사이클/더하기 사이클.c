#include <stdio.h>

int main (void)
{
    int num;
    scanf("%d",&num);

    int new_num=num;
    int sum=0;
    int count=0;

    do
    {
        sum=(new_num/10)+(new_num%10);
        new_num=(new_num%10)*10+(sum%10);
        count++;
        sum=new_num;
    } while (new_num!=num);

    printf("%d",count);

    return 0;
}