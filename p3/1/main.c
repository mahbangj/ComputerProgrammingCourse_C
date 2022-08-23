#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c,sum=0;
    printf("yek adad vared konid = ");
    scanf("%d",&n);
    while(n!=0)
    {
        c=n%10;
        sum=sum+c;
        n=n/10;
    }
    printf("\n majmoe arghame adade vared shode = %d", sum);
    return 0;
}
