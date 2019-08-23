#include <stdio.h>


double raiz_quadrada(int a)
{
    double temp = 0;

    for(int i=0; i<=a; i++)
    {
    	temp = 6.0 + 1.0 / temp;
	}

	printf("%.10f\n", 3 + 1 / temp);
}



int main(){

    int a;

	scanf("%d",&a);

    raiz_quadrada(a);

}
