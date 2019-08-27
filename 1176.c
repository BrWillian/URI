#include <stdio.h>


void calc_fibo(long long int *fibo, int t)
{
    fibo[0]= 0;
	fibo[1]= 1;

    int v;

	for(int i=2; i<=t+2; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	for(int j=0; j<t; j++)
	{
		scanf("%d",&v);

		printf("Fib(%d) = %lld\n",v,fibo[v]);
	}
}


int main(){

	int t;

	scanf("%d",&t);

	long long fibo[1020];

	calc_fibo(fibo, t);


}
