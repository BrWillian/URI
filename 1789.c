#include <stdio.h>

int corrida()
{
    int L = 0,i = 0;

    int leitura = 0, Maior = 0;

    while(scanf("%d", &L) != EOF)
    {
        for(i = 0; i < L; i++)
        {
            scanf("%d", &leitura);
            if( Maior < leitura)
            {
                Maior = leitura;
            }
        }
        if(Maior < 10)
        {
            printf("1\n");
        }
        else
        {
            if( Maior >= 10 && Maior < 20)
            {
                printf("2\n");
            }
            else
            {
                printf("3\n");
            }
        }
        Maior = 0;
    }
}

int main()
{
    corrida();
    return 0;
}
