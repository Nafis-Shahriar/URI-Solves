#include<stdio.h>
int main()
{
    int i,X,Y,sum=0;
    scanf("%d%d",&X,&Y);
    if(X<Y)
    {
        for(i=X+1;i<Y;i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
    }
    if(X>Y)
    {
        for(i=Y+1;i<X;i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
    }
        printf("%d\n",sum);


    return 0;

}
