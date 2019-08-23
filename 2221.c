#include <stdio.h>

void batalha(int n)
{
    int  vg1, vg2, atq1, atq2, def1, def2, lv1, lv2, bonus;

    while(n--)
    {
        scanf("%d",&bonus);

        scanf("%d%d%d",&atq1, &def1, &lv1);

        scanf("%d%d%d",&atq2, &def2, &lv2);

        vg1 = (atq1+def1)/2;

        if(lv1%2==0){
			vg1 += bonus;
		}

        vg2 = (atq2+def2)/2;

        if(lv2%2==0){
			vg2 += bonus;
		}

        if(vg1 == vg2)
        {
			 printf("Empate\n");
		}
        else
        {
			 vg1 > vg2 ? printf("Dabriel\n") : printf("Guarte\n");
        }
    }
}

int main()
{
    int n;

    scanf("%d",&n);
    batalha(n);

}
