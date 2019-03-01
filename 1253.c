#include <stdio.h>
#include <string.h>

int main()
{
    int n,d;

    char frase[50];

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf(" %[^\n]s", frase);

        scanf("%d",&d);

        for(int j=0; j<strlen(frase); j++)
        {
            frase[j] = (frase[j] - d) + ((frase[j]-d < 'A') ? 26 : 0);
        }

        printf("%s\n",frase);

    }

    return 0;
}
