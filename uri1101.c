#include<stdio.h>
int main()
{
    int X,Y,i,sum;
    for( ; ; )
    {
        scanf("%d%d",&X,&Y);
        if(X<=0||Y<=0)
        {
            break;
        }
        if(X<Y)
        {
            for(i=X,sum=0;i<=Y;i++)
            {
                    sum=sum+i;
                    printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
        }
        else
        {
            for(i=Y,sum=0;i<=X;i++)
            {
                    sum=sum+i;
                    printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
        }
    }

    return 0;
}

