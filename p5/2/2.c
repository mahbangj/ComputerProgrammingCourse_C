#include<stdio.h>
int main()
{
    int a,p=0,result1=0,t=1;
    printf("enter a= ");
    scanf("%d",&a);

    while(a>=2)
    {
        p=a%2;
        result1+=t*p;      // in khat dar asl tartib adad haye be dast amade ra dorost mikonad
        a/=2;
        t=t*10;            // in khat tavane 10 ra be dast mi avarad

    }
    result1+=t;
    //printf("%d",result1);
    p=0;                   // in khat va khate badi ra baraye in neveshtm ke moteghayere jadid tarif nkonm
    t=1;

    int b,result2=0;
    printf("\n enter b= ");
    scanf(" %d",&b);
    while(b>=2)
    {
        p=b%2;
        result2+=t*p;
        b/=2;
        t*=10;
    }
    result2+=t;

    int x,y,k=0;
    while(result2!=0 || result1!=0)
    {
        x=result1%10;     // in khat va khate badi miad ragham be ragham mabna 2 shodeye 2 adade vared shode ro joda mikone
        y=result2%10;
        if(x!=y)
            k++;
        result1/=10;
        result2/=10;
    }
     printf("\n fasele haming= %d",k);


    return 0;
}
