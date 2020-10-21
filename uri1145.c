#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    scanf("%d%d",&a,&b);
    for(sum=0;sum<b;)
    {
        for(i=0;i<a;i++)
        {
            sum=sum+1;
            printf("%d",sum);
            while(i<a-1)
            {
                printf(" ");
                break;
            }
        }
        printf("\n");
    }
}
