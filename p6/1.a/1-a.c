#include<stdio.h>
int f(int);
int main()
{
    int n;
    printf("enter n = ");
    scanf("%d",&n);
    f(n);
    return 0;
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
