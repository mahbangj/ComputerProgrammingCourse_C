#include<stdio.h>

    struct mokhtalet
    {
    int haghighi,
        mohomi;
    }a[2];

void sum(struct mokhtalet a);

int sum1=0;
int sum2=0;

int main()
{


    printf("ghesmate haghighi e adad mokhtalete aval = ");
    scanf("%d",&(a[0]).haghighi);

    printf("ghesmate mohomi e adad mokhtalete aval = ");
    scanf("%d",&(a[0]).mohomi);

    sum(a[0]);
    printf("ghesmate haghighi e adad mokhtalete dovom = ");
    scanf("%d",&(a[1]).haghighi);

    printf("ghesmate mohomi e adad mokhtalete dovom = ");
    scanf("%d",&(a[1]).mohomi);
    sum(a[1]);

    printf("\n jame 2 adade vared shode = %d + %d i",sum1,sum2);

    return 0;
}

void sum(struct mokhtalet a)
{
    sum1+=a.haghighi;
    sum2+=a.mohomi;
}
