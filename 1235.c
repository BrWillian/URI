 #include <stdio.h>
#include <string.h>

int main()
{
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
}
