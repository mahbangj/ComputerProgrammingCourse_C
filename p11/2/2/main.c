
#include<stdio.h>
#include<stdlib.h>

    struct time
    {
        int hour;
        int minute;
    };

    struct program
    {
        char name[50];
        struct time pakhsh;
        int viewer[3];
        int type;
    };

   struct program f(struct program k);
   struct program g(struct program k);

int main()
{
    int k;
    printf("tedade barname haye televesioni = ");
    scanf("%d",&k);

    struct program *p = malloc(sizeof(struct program)*k);

	for(int i=0;i<k;i++)
	{
		printf("barname %d : \n",i+1);
		printf("name barname = ");
		getchar();
		gets(p[i].name);

		printf("saat pakhsh : ");
		scanf("%d",&p[i].pakhsh.hour);

		printf("daghighe pakhsh : ");
		scanf("%d",&p[i].pakhsh.minute);

		printf(" tedade tamashachi kodak = :");
		scanf("%d",&p[i].viewer[1]);

        printf(" tedade tamashachi zan = :");
		scanf("%d",&p[i].viewer[2]);

        printf(" tedade tamashachi mard = :");
		scanf("%d",&p[i].viewer[3]);

	}

	for(int i=0;i<k;i++)
       {
           p[i]= f(p[i]);
           p[i]= g(p[i]);

           printf("\n type barname %s = %d : ",p[i].name,p[i].type);
       }


    return 0;
}


    struct program f(struct program k)
    {
        int x;
        float y;
        x=(k.viewer[1]+k.viewer[2]+k.viewer[3]);
        y=(float)(x)/(float)(k.viewer[1]);
        if(y>0.2)
             k.type=1;


        if(k.pakhsh.hour>=14)
        {
            printf("\n barname %s bad az saat 14 pakhsh mishavad ",k.name);
            printf("\n zamane pakhsh = %d : %d",k.pakhsh.hour,k.pakhsh.minute);
        }

        return k;
    }

    struct program g(struct program k)
    {
        if(k.viewer[2]>k.viewer[3])
            k.type=3;

        return k;
    }
