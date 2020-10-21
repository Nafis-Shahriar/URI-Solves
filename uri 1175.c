
#include<stdio.h>
int main()
{
    int i,j,ara[20],temp[20];
    for(i=0;i<20;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0,j=19;i<20;i++,j--)
    {
        temp[j]=ara[i];
    }
    for(i=0;i<20;i++)
    {
        printf("A[%d] = %d\n",i,temp[i]);
    }
    return 0;
}
