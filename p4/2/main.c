#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int a,b,guess,i=0,j=0,x=0;
    char c;
    do{

        a=rand()%10;         //adade tasadofi beyne 0 va 9
        b=rand()%10;         //adade tasadofi beyne 0 va 9
        printf("guess the multiply of two integers = ");
        scanf(" %d",&guess);
        if(guess==a*b)
        {
            i++;              // tedade dafa'ate dorost ra mishomarad
            printf("That was correct ! \n");
        }

        else
        {
            j++;             //tedad dafa'ate ghalat ra mishomarad
            printf("Ow that was incorrect ! \n");
        }
        printf("continue?[y,n]");
        c=getchar();        //2ta getchar daram, chon ke vaghti toye halghe ye bar scanf dashtm vaghti karbar space ya enter ro bezane un space ya enter ro baraye c dar nazar migire
        c=getchar();        //be jaye in 2 ta getchar mitonestm ye scanf(" %c",&c); bezaram. ba takid be space e ghable %c toye scanf.
        x++;
    }while(c=='y' || c=='Y');

    printf("The number of times you guess = %d \t Number of times your guess was correct = %d \t Number of times your guess was false = %d",x,i,j);

    return 0;
}
