#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,aux;

    while(scanf("%d", &n)!= EOF)
    {

        int numeros[n];

        for(int i=0; i<n; i++)
        {
            scanf("%d", &numeros[i]);
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(numeros[i] < numeros[j])
                {
                    aux = numeros[i];
                    numeros[i] = numeros[j];
                    numeros[j] = aux;
                }
            }
        }
        int i=0;
        int j=n-1;
        int sum=0;

        while(j>i)
        {
            sum+=abs(numeros[i++] - numeros[j--]);
        }

        printf("%d\n", sum);
    }
}
