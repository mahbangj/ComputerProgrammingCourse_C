#include<stdio.h>
int main()
{
    int n,j=0,flag;
    float a1,a2,b,a3;
    printf("n ra vared kon=  ");
    scanf("%d",&n);
    printf("adade aval ra vared kon =");
    scanf("%f",&a1);

    printf("adade dovom ra vared kon = ");
    scanf("%f",&a2);

    if(a1>a2)
    {
        j++;
        flag=1;            //flag dar asl be ma mige dafe pish so'odi bode ya nozoli
    }
    else
    {
        j++;
        flag=0;
    }
    b=a2;
    for(int i=3;i<=n;i++)
    {
        printf("%d omin adad ra vared kon= ",i);
        scanf("%f",&a3);
        if(a3<b && flag==0)    // in shart moadel ast ba = age in dafe nozoli bod va dafe pish so'odi bod, j++;
        {
            flag=1;            // hala age soodi o nozoli tagheer kard flag ro tagheer bede
            j++;
        }
        else if(a3>b && flag==1)
        {
            flag=0;
            j++;
        }
        b=a3;

    }
    printf("\n run= %d",j);
    return 0;
}
