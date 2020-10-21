#include<stdio.h>
int main()
{
    int i,x,count1=0,count2=0;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&x);
        if(x>=10&&x<=20)
        {
            count1+=1;
        }
        else
        {
            count2+=1;
        }
    }
    printf("%d in\n",count1);
    printf("%d out\n",count2);
    return 0;
}
