#include<stdio.h>
int sort(float a[],float);
int main()
{
    float x;
    float a[6];

    for(int i=0;i<5;i++)
    {
        printf("enter a[%d]= ",i);
        scanf("%f",&a[i]);
    }

    printf("enter a number = ");
    scanf("%f",&x);
    a[5]=x;
    printf("\n\n mahale edgham= %d",sort(a,x));
    return 0;
}
int sort (float a[],float x)
{
    int y;
    float c;
    for(int i=0;i<5;i++)  // in halghe ebteda araye vorodi ra be tartibe soodi moratab mikonad
    {
        for(int k=i+1;k<5;k++)
        {
            if(a[i]<a[k])
            {
                c=a[k];
                a[k]=a[i];
                a[i]=c;
            }
        }
    }

    for(int i=0;i<5;i++)    // mahale edgham ra migoyad
        {    if(x>=a[i])
             {
             y=i;

             break;
         }
        }

    for(int i=5;i>y;i-- ) // miad hame khone ha ro yeki shift mide be jolo ta ye ja vase adade jadid baz she
        {

            a[i]=a[i-1];

        }
     a[y]=x;              // hala jaye baz shode ro ba adade jadid por mikonim


    for(int i=0;i<6;i++)  // araye jadid o chap kone
        printf("a[%d]= %f\n",i,a[i]);
    return y;
}
