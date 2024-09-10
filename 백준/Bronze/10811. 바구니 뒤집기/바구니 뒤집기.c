#include <stdio.h>

int main()
{
    int n,m,a,b,tmp;
    scanf("%d %d", &n, &m);
    
    int arr[n];
    for (int i = 0; i < n; i++) arr[i] = i + 1;
    
    for (int i = 0; i < m; i++) 
    {
        scanf("%d %d", &a, &b);
        for (int j = 0; j < (b-a+1)/2; j++) 
        {
            tmp = arr[a+j-1];
            arr[a+j-1] = arr[b-j-1];
            arr[b-j-1] = tmp;
        }
    }
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}