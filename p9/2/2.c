#include<stdio.h>
#include<string.h>

void f(int *,int);
int where(int *,int , int );

int main()
{
    int a,x,b;

    printf("toole reshte ra vared kon = ");
    scanf("%d",&a);

    int c[a];
    f(c,a);

    printf("\n ye adad vared kon : ");
    scanf(" %d",&b);
    x=where(c,a,b);

    if(x==(-1))
        printf("\n yaft nashod : %d",x);
    else
        printf("\n akharin jayy ke in adad hozor dasht = c[%d]",x);



    return 0;
}

void f(int *c,int a)
{
    for(int i=0;i<a;i++)
    {
        printf("c[%d] = ",i);
        scanf(" %d",&c[i]);
    }
}

int where(int *c,int a, int b)
{
    int x,flag=0;

    for(int i=0;i<a;i++)
    {
        if(c[i]==b)
            {
                x=i;
                flag=1;    // baraye inke befahmam hamchin chizi vojod dashte ya na
            }
    }
    if(flag==0)
        return -1;
    else
        return x;
}
