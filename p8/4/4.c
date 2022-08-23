
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
		scanf("%d",p[i].pakhsh.hour);

		printf("daghighe pakhsh : ");
		scanf("%d",p[i].pakhsh.minute);
	}

    return 0;
}

