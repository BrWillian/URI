#include <stdio.h>

int main()
{
		char p,r;

		scanf("%c%c",&p,&r);

		if(p == '1' && r == '0')
		{
			printf("B\n");
		}else
		{
			if(p == '1' && r == '1')
			{
				printf("A\n");
			}else
			{
				printf("C\n");
			}
		}

}
