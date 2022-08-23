#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int i,j;
    float x;
    i=rand()%11;
    j=rand()%41+10;
    printf("%d \t %d \n",i,j);
    x=exp(i)+log(j);
    printf("x=%f",x);



    return 0;


}
