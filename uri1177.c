#include<stdio.h>
int main()
{
    int i,j,n,ara[1000];
    scanf("%d",&n);
    for(i=1;i<=1000;i++)
    {
        loop:
        printf("N[%d] = %d\n",i,j);
        for(j=0;j<n;j++)
        {
            goto loop;
        }
    }
}
