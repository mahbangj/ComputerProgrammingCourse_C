#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *open;
    open = fopen("c:\\beta\\alfa.dat","r+");
    int count=0;
    float x,sum=0 , miangin , min , flag;
    char c;

    while((feof(open)) == 0) //ta zamani ke be akhare file naresidi edame bede
    {
        fscanf(open , "%f" , &x);
        sum = sum + x ;
        count++;
    }

    miangin= sum / count;
    printf("count = %d & sum = %f &  miangin = %f ", count , sum ,miangin);

    rewind(open);  //neshane gar bargarde be avale file ke betonam ekhtelaf az miangin ro baraye har adad hesab konam.
    float ekhtelaf;
    int a=0;

    for(int i=0;i<count;i++)
    {
        fscanf(open, "%f" , &x);
        ekhtelaf= (float)abs( miangin-x ); //abs gozashtm ta ghadre motlagh hesab kone
        if(i==0)
            min=ekhtelaf;
        else
        {
            if( ekhtelaf < min )
                {
                    min = ekhtelaf;
                    flag = x;  // un adadi ke be miangin nazdik tare ro save kone
                }
        }
    }



    rewind(open); //dobare bargardim be avale file ke betonim hame adada ro to file jadid copy konim
    FILE *copy;
    copy= fopen("c:\\beta\\alfa.new","w");
    float y;

    for(int j=0;j<count;j++)
    {
        fscanf(open,"%f",&y);
        if(y==flag)    // age in adadi ke khond ba un adadi ke to for ghabl be miangin nazdik tarin bod in karo kone:
            fprintf(copy," %f* \n",y);
        else
            fprintf(copy," %f \n",y);
    }

    fclose(open);
    fclose(copy);

    return 0;
}
