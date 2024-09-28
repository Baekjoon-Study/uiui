#include <stdio.h>
#include <string.h>

int main ()
{
    char *array[]={"c=","c-","dz=","d-","lj","nj","s=","z="};
    
    char sentence[101];
    scanf("%s",sentence);

    int count=0;

    int n=strlen(sentence);
    for (int i=0 ; i<n ; i++)
    {
        int check=0;
        if (sentence[i]=='c' || sentence[i]=='d' || sentence[i]=='z'
        || sentence[i]=='l' || sentence[i]=='n' || sentence[i]=='s')
        {
            if (sentence[i]=='d' && i+2<n 
            && sentence[i+1]=='z' && sentence[i+2]=='=')
            {
                count++;
                i+=2;
                check=1;
            }

            char word[3]={sentence[i],sentence[i+1],'\0'};
            for (int j=0 ; j<8 ; j++)
            {
                if (strcmp(word,array[j])==0)
                {
                    count++;
                    i++;
                    check=1;
                    break;
                }
            }
        }
        if (check==0) count++;
    }
    printf("%d",count);
    return 0;
}