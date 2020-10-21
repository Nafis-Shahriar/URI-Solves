#include<stdio.h>
int main()
{
    int i,count=0;
    double ara[6],sum=0,avg;
    for(i=0;i<6;i++)
    {
        scanf("%lf",&ara[i]);
        if(ara[i]>0)
        {
            sum=sum+ara[i];
            count+=1;
        }
        avg=sum/count;
    }
    printf("%d valores positivos\n%.1lf\n",count,avg);

    return 0;
}

