#include<stdio.h>
int main()
{
    double n,sum=0,count=0;
    for( ; ; )
    {
        scanf("%lf",&n);
        if(n>=0&&n<=10)
        {
            sum=sum+n;
            count++;
            if(count==2)
            {
                printf("media = %.2lf\n",sum/count);
                break;
            }
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    return 0;
}
