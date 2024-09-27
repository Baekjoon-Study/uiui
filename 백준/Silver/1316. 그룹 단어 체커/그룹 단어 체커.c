#include <stdio.h>
#include <string.h>

int main ()
{
    int num;
    scanf("%d",&num);

    int count=0;
    for (int i=0 ; i<num ; i++)
    {
        char sentence[101];
        getchar();
        scanf("%s",sentence);

        int check=0;
        int n=strlen(sentence);
        for (int j=1 ; j<n ; j++)
        {
            if (sentence[j]!=sentence[j-1])
            {
                for (int k=0 ; k<j ; k++)
                {
                    if (sentence[k]==sentence[j]) check++; 
                }
            }
        }
        if (check==0) count++;
    }
    printf("%d",count);
    return 0;
}