#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char texto[1000];

    char zelda[6] = "zelda";

    scanf("%s", texto);

    for(int i=0; i<strlen(texto); i++)
    {
        texto[i] = tolower(texto[i]);
    }

    strstr(texto,zelda) !=NULL ? printf("Link Bolado\n") : printf("Link Tranquilo\n");


}
