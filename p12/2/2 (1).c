#include<stdio.h>
#include<string.h>

struct hardware
{
    int record;
    char toolname[50];
    int quantity;
    float cost;
};

struct hardware data( void );
void    f (FILE *ptr,struct hardware k);

int main()
{
    FILE *dat;
    dat= fopen("hardware.txt","w+");
    fprintf(dat,"Record \t Tool name \t Quantity \t Cost");


    int x;
    printf(" number of hardwares = ");
    scanf("%d",&x);
    struct hardware new[x];

    for(int i=0;i<x;i++)
     {
         printf("# %d : \n",i+1);
         new[i]= data();

         fprintf(dat,"\n%-8d",new[i].record);
         fprintf(dat,"%-17s",new[i].toolname);
         fprintf(dat,"%-15d",new[i].quantity);
         fprintf(dat,"%-15f",new[i].cost);
     }

    fclose(dat);
    struct hardware k;
    printf("your new hardware case : \n");

    printf(" record = ");
    scanf("%d",&k.record);


    printf("Toolname : ");
    gets(k.toolname);
    gets(k.toolname);

    printf("Quantity = ");
    scanf("%d",&k.quantity);

    printf("Cost = ");
    scanf("%f",&k.cost);

    FILE *pt;
    pt = fopen("hardwarenew.txt","r+");
    dat= fopen("hardware.txt","r");
    f(dat,k);

    fclose(dat);


    return 0;
}

struct hardware data ( void )
{
    struct hardware k;

    printf(" record = ");
    scanf("%d",&k.record);


    printf("Toolname : ");
    gets(k.toolname);
    gets(k.toolname);

    printf("Quantity = ");
    scanf("%d",&k.quantity);

    printf("Cost = ");
    scanf("%f",&k.cost);

    return k;
}

void f(FILE *ptr,struct hardware k)
{

    int count=0;
    int x;
    while(!feof(ptr))
    {
        if(fgetc(ptr)=='\n')
            count++;
    }
    x=count;
    printf("\nX: %d\n", x);
    struct hardware newfile[x];

    rewind(ptr);
    int i=0;
    char str[10000];
    fgets(str, 10000,ptr);
    for(int j=0;j<x;j++)
    {
        fscanf(ptr,"%d %s %d %f",&newfile[i].record,newfile[i].toolname,&newfile[i].quantity,&newfile[i].cost);
        i++;
    }
    printf("\ni =  %d\n", i);
    getchar();
    FILE * pt = fopen("hardwarenew.txt","w");

    fprintf(pt,"Record \t Tool name \t\t Quantity \t\t Cost");
    for(int j=0;j<x;j++)
    {
        if(newfile[j].record==k.record)
        {
            newfile[j].record=k.record;
            newfile[j].quantity=k.quantity;
            newfile[j].cost=k.cost;
            strcpy(newfile[j].toolname,k.toolname);
        }
         fprintf(pt,"\n %-8d",newfile[j].record);
         fprintf(pt,"%-17s",newfile[j].toolname);
         fprintf(pt,"%-15d",newfile[j].quantity);
         fprintf(pt,"%-15f \n",newfile[j].cost);
    }


}
