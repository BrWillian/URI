#include<stdio.h>

int main()
{
    int i,n;
    long int a,d;
    float b,c;
    while(scanf("%d",&n)){
        c=0;
        for(i = 0;i < n;i++){
            scanf("%ld %f",&a, &b);
            if(b>c){
                c=b;
                d=a;
            }
        }
        if(c<8)printf("Minimum note not reached\n");
        else printf("%ld\n",d);
    }
    return 0;
}
