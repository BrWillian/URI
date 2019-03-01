#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    int n;

    char texto[50];

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%s",texto);

        int tamanho = strlen(texto);

        for(int j=tamanho; j>=0; j--)
        {
            if(islower(texto[j]))
            {
                printf("%c",texto[j]);
            }
        }
        printf("\n");
    }
}
