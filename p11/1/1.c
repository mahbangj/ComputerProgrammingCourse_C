#include<stdio.h>
#include<stdlib.h>

    struct time
    {
        int hour;
        int minute;
    };

    struct course
    {
        char name[20];
        int code;
        struct time duration[3];
    };

    struct time g( struct course k , int min);

int main()
{

    int n;
    printf(" tedade doros = ");
    scanf(" %d",&n);

    struct course *k= malloc(sizeof(struct course)*n);

    for(int i=0;i<n;i++)
    {
        printf(" name dars %d= ",i+1);
        getchar();
        gets(k[i].name);

        printf("\n code darse %d= ",i+1);
        scanf("%d",&k[i].code);

        printf("\n  zamane emtehane darse %d : \n",i+1);
        for(int j=0;j<3;j++)
        {
            printf(" saat emtehane %d= ",j+1);
            scanf("%d",&k[i].duration[j].hour);

            printf(" daghighe emtehane %d= ",j+1);
            scanf("%d",&k[i].duration[j].minute);

            printf("\n");

        }
    }

    for(int i=0;i<n;i++)
    {
      k[i].duration[1] = g(k[i],30);

      if(k[i].duration[2].hour<1)
        printf(" \n  emtehane 3vome in darse %s zamane kamtar az 60min ra darad. ",k[i].name);
    }

    return 0;
}

struct time g( struct course k , int min)
{
    k.duration[1].minute += 30;


    if(k.duration[1].minute>59)
    {
        k.duration[1].hour+=k.duration[1].minute/60;
        k.duration[1].minute%=60;


    }
    printf(" zamane jadide emtehane 2vome darse %s = %d hour & %d minute \n",k.name,k.duration[1].hour,k.duration[1].minute);



    return k.duration[1];
}
