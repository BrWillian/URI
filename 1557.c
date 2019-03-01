#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];

    int n;

    scanf("%d",&n);

    for(int j=0; j<n; j++)
    {
        int c=0;

        scanf(" %[^\n]s", str);

        for(char ch = 97; ch <= 122; ch++)
        {
            for(int i=0; i<strlen(str); i++)
            {
                if(str[i] == ch)
                {
                    c++;
                    break;
                }
            }
        }

        if(c == 26) printf("Frase completa\n");
        else if(c >= 13) printf("Frase quase completa\n");
        else printf("Frase mal elaborada\n");
    }
}
