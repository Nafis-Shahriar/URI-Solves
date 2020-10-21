#include<stdio.h>
int main()
{
    int n,i,j,k,sum,ara[200],count=0;
    while(scanf("%d",&n)==1)
    {
        sum=1;
        count++;
        ara[0]=0;
        for(i=1,k=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                ara[k]=i;
                k++;
            }
            sum+=i;
        }
        printf("Caso %d: %d numero\n",count,sum);
        for(i=0;i<sum;i++)
        {

            printf("%d ",ara[i]);

        }
        printf("\n\n");
    }
    return 0;
}
