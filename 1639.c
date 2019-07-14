#include <stdio.h>
#include <string.h>

int main()
{
	int a;
	int array[10000];

	while(scanf("%d", &a) && a)
	{
		memset(array, 0, sizeof(array));

		int count = 0;

		while(!array[a])
		{
			array[a] = 1;

			a*= a;
			a/= 100;
			a%= 10000;
			++count;
		}
		printf("%d\n", count);

	}
}
