#include<stdio.h>
float miangin(float a[]);
float variance(float a[]);
int n;
float x;  //miangin ra sarasari tarif kardm ke betonm azash toye variace gereftn estefade konm
int main()
{
    printf("enter count = ");
    scanf("%d",&n);         // tedade khone haye araye ro moshakhas mikone
    float a[n];
    for(int i=0;i<n;i++)    // adad ha ro az karbar migire
    {
        printf("enter a[%d] = ",i);
        scanf("%f",&a[i]);
    }
    miangin(a);
    printf("miangin = %f  \t variance = %f ",miangin(a),variance(a));
    return 0;
}

float miangin(float a[])
{
    float sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    x=sum/n;
     return x;
}

float variance(float a[])
{
    float sum=0;
    for(int i=0;i<n;i++)
        sum+=((a[i]-x)*(a[i]-x));   // midanim variance barabar ast ba miangine : majmoe morabae ekhtelafe har adad az miangin.

    return sum/n;
}







