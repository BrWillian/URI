#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50];

    char str2[50];

    scanf(" %[^\n]s", str1);

    scanf(" %[^\n]s", str2);

    while(1)
    {
        int z=0,p=0;

        for(int i=0;i<strlen(str1);i++)
        {
            for(int j=0;j<strlen(str2);j++)
            {
                if(str2[j]==str1[i])

                {
                    p=0;
                    for (int k = j,l=i;k<strlen(str2),l<strlen(str1) ; k++,l++)
                    {
                        if(str2[k]!=str1[l])
                            break;
                            p++;
                    }

                    if(p>z)
                    {
                        z=p;
                    }
                }
            }
        }
    printf("%d\n",z);

    scanf(" %[^\n]s", str1);

    scanf(" %[^\n]s", str2);
    }
}
