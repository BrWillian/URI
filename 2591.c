#include <stdio.h>
#include <string.h>


int main()
{
    int n,a=0;

    int c=0,b=0;

    char hame[200];

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%s", hame);

        for(int k=0; k<strlen(hame); k++)
        {
            if(hame[k] == 'a' && b==0)
            {
                a++;

                if(hame[k+1] == 'm')
                {
                    b=1;
                }
            }
            if(hame[k] == 'a' && b==1)
            {
                c++;
            }

        }

        printf("ka");

        for(int l=2; l<=a*(c-1); l++)
        {
            printf("a");
        }

        printf("\n");

        c=0;
        a=0;
        b=0;
    }

}
