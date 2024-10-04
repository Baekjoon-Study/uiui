#include <stdio.h>
#include <string.h>

int main (void)
{
    char array[5][16]={""};
    
    for (int i=0 ; i<5 ; i++) {
        scanf("%s",array[i]);
    }

    int max=strlen(array[0]);
    for (int i=1 ; i<5 ; i++) {
        if (max<strlen(array[i])) max=strlen(array[i]);
    }

    for (int i=0 ; i<max ; i++) {
        for (int j=0 ; j<5 ; j++) {
            if (i<strlen(array[j])) printf("%c",array[j][i]);
        }
    }
    return 0;
}