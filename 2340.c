#include <stdio.h>
#include <math.h>

int main()
{
    int n,pos=0;

    int d,c;

    double maior=0;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&d,&c);

        double log = log10(d);
        log*=c;

        if(log > maior)
        {
            maior = log;
            pos = i;
        }

    }

   printf("%d\n",pos);
}
