<<<<<<< HEAD
 #include <stdio.h>
=======
#include <stdio.h>
>>>>>>> 2c029e642eee06c64127c4df78813a500532324a
#include <string.h>

int main()
{
<<<<<<< HEAD
    int N, length, half;
    char frase[102], frase1[101];

    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; ++i) {
        fgets(frase, 102, stdin);

        length = strlen(frase) - 1;
        half = length / 2 + length % 2;

        for (int j = half - 1; j >= 0; --j)
            frase1[half - j - 1] = frase[j];

        for (int j = length - 1; j >= half; --j)
            frase1[length - j - 1 + half] = frase[j];

        frase1[length] = '\0';
        puts(frase1);
    }

    return 0;
=======
    char frase [101];

    int n;

    scanf("%d",&n);

    for(int k=0; k<n; k++)
    {
        scanf(" %[^\n]",frase);

        for(int i=strlen(frase)/2-1; i>=0; i--)
        {
            printf("%c", frase[i]);
        }
        for(int j=strlen(frase); j>=strlen(frase)/2; j--)
        {
            printf("%c", frase[j]);
        }
        printf("\n");
    }
>>>>>>> 2c029e642eee06c64127c4df78813a500532324a
}
