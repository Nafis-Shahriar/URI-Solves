#include<stdio.h>
int main()
{
    int i,v,ara[10];
    scanf("%d",&v);
    for(i=0;i<10;i++)
    {
        ara[i]=v;
        v=v*2;
        printf("N[%d] = %d\n",i,ara[i]);
    }
}
