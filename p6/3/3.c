#include <stdio.h>
void f(void);
int n,i=0;
int main()
{printf("enter n = ");
scanf("%d",&n);
f();
return 0;
}
void f(void)
{
 float a;
if(i==n)
 return;
printf("enter a= ");
scanf("%f",&a);
i++;
f();
printf("%f \n",a);
return ;
}
