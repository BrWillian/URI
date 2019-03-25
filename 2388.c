#include <stdio.h>
#include <math.h>

int main()
{
    int l,a,p,r;

    scanf("%d%d%d%d",&l,&a,&p,&r);

    if(l*l + a*a + p*p <= 4*r*r)
    {
        printf("S\n");
    }else{
        printf("N\n");
    }
}
