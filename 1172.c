#include <stdio.h>


void preenche(int *p)
{
    int n;

    for(int i = 0; i < 10; i++){
        scanf("%d",&n);

        if(n <= 0)
        {
            p[i] = 1;
        }else
        {
            p[i] = n;
        }
        printf("X[%d] = %d\n", i, p[i]);
    }
}

int main(){
    int vet[10];

    preenche(vet);

    return 0;
}
