#include<stdio.h>
void f(int a[][3]);
int main()
{
    int a[3][3];
    for(int i=0;i<3;i++)    //meghdar dehi avalie
    {
        for(int j=0;j<3;j++)
        {
            printf("a[%d][%d] =   ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    f(a);
    return 0;
}


void f(int a[][3])
{
    int x;
    printf("\n matrise avalie = \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("a[%d][%d]= %d        ",i,j,a[i][j]);
        printf("\n");
    }



    for(int i=0;i<3;i++)    //jabe jayye ghore asli o fari
    {
     x=a[i][i];
     a[i][i]=a[i][2-i];     //algorithme jabejayy khane i&i ba khane i&(2-i) jabe ja mishe
     a[i][2-i]=x;
    }

    printf("\n \n matrise nahayy = \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("a[%d][%d]= %d        ",i,j,a[i][j]);
        printf("\n");
    }
}




