#include<stdio.h>

int main()
{
    int n,i=2,x,flag,j=0,y;
    printf("enter n = ");
    scanf("%d",&n);

    printf("enter a number = ");
    scanf("%d",&x);
    y=x;

    while(i<=n)
    {
        printf("enter a number(caution:if your last number was even, enter an odd number and visa versa) = ");
        scanf("%d",&x);
        if(y%2==0 || y==0)                //agar adade ghabli zowj bod :
        {
            if(x%2==0 || x==0)            //age adade jadid zowj bod :
            {
                printf("that was a mistake ! \n");
                j++;                      //shomare ghalat ro mige
                if(j==1)                  // age avalin ghalat bod, to flag zakhirash kon.
                {
                    flag=i;
                }
            }
        }
        else
        {
            if(x%2!=0 || x==1)
            {
                printf("that was a mistake ! \n");
                j++;
                if(j==1)
                {
                    flag=i;
                }
            }
        }
        y=x;                        //adad ro beriz toye y, ke betonm dafe bad toye halghe check konm ke adade jadid ba tartib hast ya na.
        i++;

    }
    if(j==0)
     printf("\n Bingoo you were correct the whole time!");
    else
     printf("\n Ow,you have got mistake, the first mistake was in the term %d",flag);
return 0 ;
}
