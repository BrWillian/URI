#include <stdio.h>
#include <string.h>

int main ()
{
    char txt[80], maior[80];

    fflush(stdin);

    while (scanf(" %[^\n]s", txt))
    {
        if (strcasecmp(txt,maior) > 0)
        {
            strcpy(maior,txt);
		}
    }

    printf ("%s\n", maior);

    return 0;
}
