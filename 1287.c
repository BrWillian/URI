#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[50],str_n[50];

    fgets(str,50,stdin);

    int k=0,c=0;

    for(int i=0; i<strlen(str); i++)
    {
        if(str[i] == 'l')
        {
            str[i] = '1';
            str_n[k] = str[i];
            k++;
        }else
        {
            if(str[i] == 'o' || str[i] == 'O')
            {
                str[i] = '0';
                str_n[k] = str[i];
                k++;
            }
            else
            {
                if(isdigit(str[i]))
                {
                    str_n[k] = str[i];
                    k++;
                }else
                {
                    c++;
                }
            }
        }
    }
    str_n[k] = '\0';

    long long int n = atol(str_n);

    if(c == strlen(str) || n > 2147483647)
    {
        printf("error\n");
    }else{
        printf("%lld\n", n);
    }
}
