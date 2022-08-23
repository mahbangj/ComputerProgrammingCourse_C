#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter n = ");
    scanf("%d",&n);
    printf("adade avale 1 ta n barabar ast ba = \n");
    for(int i=2;i<=n;i++)          //in halghe az 1 ta n ra check mikonad ke aval ast ya kheyr
    {
        int x=0;
        for(int j=2;j<i;j++)      //in halghe dar har bar chek mikonda adade i aval ast ya na
        {
            if(i%j==0)
            {
               x=1;
               break;             //mikhaham dar avalin bari ke maghsom elayhi be gheyr az 1 va khodash dasht digar halghe ra tekrar nakonad,chon mpshakhas shode ke adad aval nist.
            }
        }
        if(x==0)
            printf(" %d \t",i);
    }
    return 0;
}
