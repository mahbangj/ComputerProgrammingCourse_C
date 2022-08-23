#include<stdio.h>
#include<string.h>

int main()
{
    char a[40],c;
    printf("reshte ra vared kon = ");
    gets(a);
    int i=strlen(a)-1;

    for(int j=0,s=i;j<=i/2;j++,s--)
    {
        c=a[j];
        a[j]=a[s];
        a[s]=c;

    }
      printf("%s",a);

    return 0;
}

