#include <stdio.h>
#include <string.h>


int main()
{
    char texto[1000];

    int n;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%s",texto);

            if(strlen(texto) == 5)
            {
                printf("3\n");
            }else
            {
                if((texto[0] == 'o' && texto[1] == 'n') || (texto[1] == 'n' && texto[2] == 'e') || (texto[0] == 'o' && texto[2] == 'e'))
                {
                    printf("1\n");
                }else
                {
                    printf("2\n");
                }
            }
        }

    return 0;
}
