#include <stdio.h>

int calcula(int n)
{
    int i, a, b, z = 0, x, y;

    for (b = 1; b <= n; b++)
    {
        scanf("%d%d", &x, &y);
        if (y < x)
        {
            a = y;
            y = x;
            x = a;
        }

        for (i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
            {
                z = z+i;
            }
        }

        printf("%d\n", z);

        z = 0;
    }
}

int main() {

    int n;

    scanf("%d", &n);

    calcula(n);

    return 0;
}
