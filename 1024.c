#include <stdio.h>
#include <string.h>

int main()
{
    char frase[1000];

    int n, l=0;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf(" %[^\n]s", frase);

        for(int i=0; i<strlen(frase); i++)
        {
            if(!(frase[i] == ' '))
            {
                if((96 < frase[i] && frase[i] < 123) || (64 < frase[i] && frase[i] < 91))
                {
                    frase[i]=frase[i]+3;
                }
            }
        }

        int tamanho=strlen(frase);

        for (int i=tamanho-1; l <= i; i--)
        {
            char aux = frase[i];
            frase[i] = frase[l];
            frase[l]=aux;
            l++;
        }

        for(int i=tamanho/2; i<tamanho; i++)
        {
            if(!(frase[i] == ' '))
            {
                frase[i]=frase[i]-1;
            }
        }


        printf("%s\n", frase);
        l=0;
    }

}
