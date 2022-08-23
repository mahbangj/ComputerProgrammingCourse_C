#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("yek adade sahih vared konid= ");
    scanf("%d",&a);
    b=a/365;       //sal
    c=(a%365)/30;  //mah
    d=(a-(b*365))%30;        //rooz
    printf("adade vared shode moadel ast ba: %d sal \t %d mah \t %d rooz ", b,c,d);
    return 0;
}
