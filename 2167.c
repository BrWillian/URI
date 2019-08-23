#include <stdio.h>

void falha(int n)
{
    int tmp = 0, RPM, cnt = 0, ans = 0, cndtn = 1;

    while(n--)
    {
        scanf("%d", &RPM);
        cnt++;
        if(RPM<tmp && cndtn==1)
        {
            ans = cnt;
            cndtn = 0;
        }
        tmp = RPM;
    }
    printf("%d\n", ans);
}


int main()
{
    int n;
    scanf("%d", &n);

    falha(n);
}
