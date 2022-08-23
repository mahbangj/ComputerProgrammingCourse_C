#include<stdio.h>
int func(int,int);
int main()
{
    int x,y;
    printf(" enter x and y = ");
    scanf("%d %d",&x,&y);
    func(x,y);
    return 0;
}

int func(int x,int y)
{
    int b,a,s,flag=0;
    if(x<0)
        x*=(-1);
    if(y<0)
        y*=(-1);
    for(int i=0;i<=9;i++)
        if(x==i)
          flag=1;
    if(flag==0)
        return -1;
    while(x!=0)
    {
        s=x%10;
        b=y;
        while(b!=0)
        {
            a=b%10;
            b=b/10;
            if(a==s)
                return 1;
        }
        x=x/10;
    }
    return 0;
}
