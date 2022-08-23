#include <stdio.h>
#include <stdlib.h>

void vorodi(int a[3][3]);
int *zarb(int a[3][3],int b[3][3]);

int a[3][3];
int b[3][3];

int main()
{
    int *k=0;
    printf("azaye a = \n");
    vorodi(a);

    printf("azaye b = \n");
    vorodi(b);

    k =zarb(a,b);

    printf("zarb in do : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            {
                printf("[%d][%d] = %d \n",i,j,*(k+(3*i)+j));
            }
    }

    return 0;
}

void vorodi(int a[3][3])
{
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             printf("enter [%d][%d] = ",i,j);
             scanf("%d",&a[i][j]);
         }
     }
}

int *zarb(int a[3][3],int b[3][3])
{
  static int *p=0; //static hast chon mikham bargardonamesh o nabayad az beyn bere
  p=(int *) malloc (9*sizeof(int));
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
          for(int k=0;k<3;k++)
            *(p+(3*i)+j)+=a[i][k]*b[k][j];
      }
  }
    return p;
}



