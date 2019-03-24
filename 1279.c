#include <stdio.h>
#include <math.h>

int main()
{
    long long int n;


    while(scanf("%lld", &n))
    {
        long long int log = log10(n);

        printf("%lld\n", log);
    }

}
