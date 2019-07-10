#include <stdio.h>
#include <math.h>
int main()
{
    int n,c,d;

    long long int resultado;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d%d", &c, &d);

        resultado = pow(26,c) * pow(10,d);

        if( c == 0 && d == 0)
        {
            resultado = 0;
        }

        printf("%lld\n", resultado);

    }
}
