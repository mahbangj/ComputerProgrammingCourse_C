#include<stdio.h>
void f(float a[][3]);
float miangin(float a[][3]);
float bishtarin(float a[][3]);
int n;
int main()
{

    printf("tedade daneshjoo ha ra vared konid : ");
    scanf("%d",&n);

    float a[n][3];
    f(a);  // baraye meghdar dehi lazem nist dobare chap beshe vase hamin void gharar dadam

    float c;
    c=miangin(a);
    printf("miangine in kelas = %f \n",c);

    float b;
    b=bishtarin(a);
    printf("shomare daneshjooyye fardi ke bishtarin nomre ha ra avarde ast = %f",b);
    return 0;
}

void f(float a[][3])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j<2)   // do khoneye aval baraye nomre ast, in shart mige age to 2 khone aval bod bia nomre ro begir
            {
            printf("nomre darse %d daneshjoye[%d]= ",j+1,i+1);
            scanf("%f",&a[i][j]);
            printf("\n");  // baraye zibayye :))
            }
            else     // hala age khone 3vom bod bia shomare daneshjoyy begir
            {
                printf("shomare daneshjoyye daneshjoye %d ra vared kon = ",i+1);
                scanf("%f",&a[i][j]);
                printf("\n");
            }
        }
    }
}

float miangin(float a[][3])
 {
  float sum=0;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<2;j++)
      {
          sum+=a[i][j];
      }
  }
  return sum/(2*n);   // taghsim bar 2*n chon ke be ezaye har daneshjo 2ta nomre vojod dare
 }


 float bishtarin(float a[][3])
 {
     float max=0,x;    // meghdar avalie ye max ro sefr gozashtm ta sum e avalin daneshjo dakhelesh gharar begire
     for(int i=0;i<n;i++)
     {
         float sum=0;
         for(int j=0;j<2;j++)
         {
             sum+=a[i][j];
         }
         if(sum>max)  // age jame nomre haye  daneshjoye i om az max bishtar bod bia in kara ro anjam bede
           {
               x=a[i][2];  // shomare daneshjoyy ish ro zakhire kon
               max=sum;    // max ro barabare jame nomre hash gharar bede
           }
     }
     return x;             // hala shomare daneshjoyy ro ke zakhire kardi bargardon
 }







