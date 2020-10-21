#include<stdio.h>
int main()
{
    int X,i,count;
    scanf("%d",&X);
    for(i=X,count=0;count<6;i++)
    {
        if(i%2!=0)
        {
            count+=1;
            printf("%d\n",i);
        }
    }
    return 0;
}

