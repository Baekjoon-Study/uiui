#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main (void)
{
    char sentence[1000000];
    scanf ("%s",sentence);

    int n = strlen(sentence);
    for (int i=0 ; i<n ; i++)
    {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') sentence[i] = sentence[i]-'a'+'A';
    }

    int arr[26] = {0,};
    for (int i=0 ; sentence[i] ; i++) arr[sentence[i]-'A']++;

    int maxi1=0;
    char maxi2='?';
    for (int i=0 ; i<26 ; i++)
    {
        if(arr[i]>maxi1)
        {
            maxi1=arr[i];
            maxi2=i+'A';
        }
        else if (arr[i] == maxi1) maxi2='?';
    }
    printf("%c",maxi2);
    return 0;
}