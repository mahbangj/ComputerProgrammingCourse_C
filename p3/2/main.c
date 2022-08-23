#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n=10,x,c=1,i;
    float sum=0;
    printf("x ra vared konid = ");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
     {
        sum=sum +((pow(x,i-1))/c);
        c=c*i;                           //factoriel dar makhraj ra hesab mikonad.
     }
    printf("e^x= %f",sum);


    return 0;
}
