#include <stdio.h>

void preenche(int *p, int a)
{
    int b=0;

    for(int i=0; i<1000; i++)
	{
		b++;

		if(i%a==0){
            b=0;
		}
		printf("N[%d] = %d\n",i,b);
	}
}

int main(){

	int a;
	int vet[1000];

	scanf("%d",&a);

    preenche(vet, a);

}
