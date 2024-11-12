#include <stdio.h>

int main (void)
{
    int start,end;
    scanf("%d",&start);
    scanf("%d",&end);

    int sum=0;
    int min=0;

    for (int i=start ; i<=end ; i++) {
        if (i<2) continue;

        int count=0;
        for (int j=2 ; j<i ; j++) {
            if (i%j==0) count++;
        }
        if (count==0) {
            sum+=i;
            if (min==0) min=i;
        }
    }

    if (sum==0) printf("-1\n");
    else printf("%ld\n%ld",sum,min);

    return 0;
}