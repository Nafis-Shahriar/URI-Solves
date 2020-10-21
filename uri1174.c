#include<stdio.h>
int main()
{
    int i,count=0;
    double ara[i];
    for(i=0;i<100;i++)
    {
        scanf("%lf",&ara[i]);
        count++;
        if(ara[i]<=10)
        {
            printf("A[%d] = %.1lf\n",count,ara[i]);
        }

    }
    return 0;
}
