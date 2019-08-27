#include <stdio.h>

void par_impar(int p, int j1, int j2, int r, int a)
{
    int jogo, ganhador;

    jogo = j1 + j2;

    if((jogo%2==0 && p==1) || (jogo%2==1 && p==0))
    {
        ganhador = 1;
    }
    else
    {
        ganhador = 2;
    }
    if((r==1 && a==0) || (r==0 && a==1))
    {
        ganhador = 1;
    }
    else
    {
        if(r==1 && a==1)
        {
            ganhador = 2;
        }
    }

    printf("Jogador %d ganha!\n", ganhador);

}

int main()
{
    int p, j1, j2, r, a, ganhador, jogo;

    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    par_impar(p,j1,j2,r,a);

    return 0;
}
