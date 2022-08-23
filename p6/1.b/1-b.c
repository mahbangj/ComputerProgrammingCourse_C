#include<stdio.h>
int f(int);
float g(int);
int main()
{
    int k;
    printf("enter k = ");
    scanf("%d",&k);
    g(k);
    return 0;
}
float g(int k)
{
    float a=0;
    for(int i=1;i<=k;i++)
    {
        a+=f(i)/i;
    }
    return a;
}
int f(int k)
{
    int s,g;
    for(int i=k;;i++)
    {
        if(i%k==0)
        {
            s=i;
            for(int j=1;s!=0;j++)
            {
                g=s%10;
                s=s/10;
                if(g==0 || g==1 || g==2)
                  return i;
            }
        }
    }

}
