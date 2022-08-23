#include<stdio.h>
int main()
{
    // ba moteghayere komaki
    int a,b,c;
    printf("2 adade a va b ra vared konid  ");
    scanf("%d \t %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("maghadire jadid a=%d \t b=%d \n\n",a,b);


    // bedone moteghayere komaki

    a=0;
    b=0;
    printf("2 adade a va b ra vared konid ");
    scanf("%d \t %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("maghadire jadid a=%d \t b=%d \n\n",a,b);
    return 0;
}
