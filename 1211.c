#include <stdio.h>
#include <string.h>

int main()
{
    int n,c=0;

    char number[200];

    scanf("%d",&n);

    scanf(" %[^\n]s", number);

    for(int i=0; i<strlen(number); i++)
    {
        if(number[i] == number[i+1])
        {
            c++;
        }
    }

}
