#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	int N, M, soma;
	int tam;
	string somaString, resultado;
	while (1)
	{
		cin >> N >> M;
		soma = 0;
		if (N == 0 && M == 0) break;
		else
		{

			soma = N + M;

			somaString = to_string(soma);

			tam = somaString.size();

			for (int i = 0; i < tam; i++)
			{
				if (somaString[i] != '0')
				{
					resultado.push_back(somaString[i]);
				}
			}


			cout << resultado << endl;
		}
	}
	return 0;
}
