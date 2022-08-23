#include<stdio.h>
int main(){
float a,b,c,pi=3.14159,diameter1,diameter2,diameter3,mohit1,mohit2,mohit3,masahat1,masahat2,masahat3;
printf("shoae 3 dayere ra vared konid : ");
scanf("%f %f %f",&a,&b,&c);
diameter1=a*2;
diameter2=b*2;
diameter3=c*2;
mohit1=diameter1*pi;
mohit2=diameter2*pi;
mohit3=diameter3*pi;
masahat1=pi*a*a;
masahat2=pi*b*b;
masahat3=pi*c*c;
printf("\n Row \t Radius \t Diameter \t Circumference \t         Area \n");
printf("----------------------------------------------------------------------\n");
printf("1      \t %.3f   \t %.3f     \t %.3f          \t %.3f \n",a,diameter1,mohit1,masahat1);
printf("2      \t %.3f   \t %.3f     \t %.3f          \t %.3f \n",b,diameter2,mohit2,masahat2);
printf("3      \t %.3f   \t %.3f     \t %.3f          \t %.3f \n",c,diameter3,mohit3,masahat3);
}
