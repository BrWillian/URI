#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int c;

    int n,m;

    scanf("%d", &c);

    for(int i=0; i<c; i++)
    {
        scanf("%d%d", &n, &m);

        double log=log10(n);

        log*=m;

        printf("%.0lf\n", floor(log)+1);
    }
}
