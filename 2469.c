#include <stdio.h>
#include <string.h>

int main()
{
    int array[101],n,nota,anterior = 0,notas;

    scanf("%d", &n);

    memset(array,0,sizeof(array));

    for(int i=0; i<n; i++)
    {
        scanf("%d", &notas);

        array[notas]++;
    }

    for(int i=0; i<=100; i++)
    {
        if(array[i] >= anterior)
        {
            anterior = array[i];

            nota = i;
        }
    }

    printf("%d\n", nota);

}
