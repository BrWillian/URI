#include <stdio.h>

void calcula_crescimento(int n)
{
    long long int pa, pb;
    double ca, cb;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld%lld%lf%lf", &pa,&pb,&ca,&cb);

        int a = 0;
        int sec = 0;

        while(pa <= pb)
        {
            pa += pa*ca/100;
            pb += pb*cb/100;
            a++;

            if(a > 100){
                sec = 1;
                break;
            }
        }
        if(sec == 0){
            printf("%d anos.\n", a);
        }
        else{
            printf("Mais de 1 seculo.\n");
        }
    }
}


int main()
{
    int n;

    scanf("%d", &n);

    calcula_crescimento(n);
}
