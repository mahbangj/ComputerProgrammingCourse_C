#include<stdio.h>

int main()
{
    int m,n;
    printf("enter m & n= ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    int b[n][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            b[i][j]=a[j][i];
            printf("b[%d][%d] = %d \t",i,j,b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
