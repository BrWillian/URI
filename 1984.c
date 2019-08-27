#include <stdio.h>

#include <string.h>

void string(char *n)
{
    int tamanho,i,j,a;

    tamanho = strlen(n);

    for(i=0, j=tamanho-1; i < tamanho/2; i++, j--)
    {
        a = n[i];
        n[i]=n[j];
        n[j]=a;
    }
    printf("%s\n", n);
}

int main()
{
    char n[11];

    int tamanho,i,j;

    scanf("%s", n);

    string(n);

    return 0;
}
