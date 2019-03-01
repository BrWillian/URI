#include <stdio.h>

int main()
{

    int n;

    char curso[100];

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf(" %[^\n]s", curso);
    }
    printf("Ciencia da Computacao\n");

}
