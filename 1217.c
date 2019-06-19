#include <stdio.h>
#include <string.h>
#include <ctype.h>


int contaFrutas(char frutas[100])
{
	int conta = 0;
	
	for(int i=0; i<strlen(frutas); i++)
	{
		if(isupper(frutas[i]) == 1)
		{
			conta++;
		}
	}
	
	return conta;
}

int main()
{
	int n,i;
	char frutas[1000];
	float preco, totalp = 0, totalf = 0;
	int contaFruta;
	
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%f", &preco);
		scanf(" %[^\n]s", frutas);
		
		totalp += preco;
		printf("day %d: %d kg\n",i+1, contaFrutas(frutas));
		contaFruta = contaFrutas(frutas);
		totalf += contaFruta;
	}
	printf("%.2lf kg by day\nR$ %.2lf by day\n", totalf/i, totalp/i);
}
