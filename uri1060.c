#include<stdio.h>
int main()
{
    int i,count=0;
    double ara[6];
    for(i=0;i<6;i++)
    {
        scanf("%lf",&ara[i]);
        if(ara[i]>0)
        {
            count+=1;
        }
    }
    printf("%d valores positivos\n",count);
    return 0;
}
