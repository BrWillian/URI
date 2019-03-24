#include <stdio.h>
#include <string.h>

int main()
{
    char frase [101];

    int n;

    scanf("%d",&n);

    for(int k=0; k<n; k++)
    {
        scanf(" %[^\n]",frase);

        for(int i=strlen(frase)/2-1; i>=0; i--)
        {
            printf("%c", frase[i]);
        }
        for(int j=strlen(frase); j>=strlen(frase)/2; j--)
        {
            printf("%c", frase[j]);
        }
        printf("\n");
    }
}
