#include<stdio.h>
#include<string.h>

int repeat(char a[],char);

int main()
{
    char a[100],b;

    printf("enter a string : ");
    gets(a);

    printf("enter a charachter : ");
    scanf("%c",&b);


    printf("\n Number of repeating of the charachter in the string is : %d \n\n ",repeat(a,b));

    return 0;

}


int repeat(char a[100],char b)
{
    int countx=0;

    for(int i=0;i<(strlen(a));i++)  // strlen toole reshte ra taeen mikonad
    {
        if(a[i]==b)
            countx++;
    }

    return countx;

}
