#include<stdio.h>

int main()
{
    long long int a,i,n,sum,r;
    while(scanf("%lld%lld",&a,&n)!=EOF)
    {
        sum=0;
        for(i=0;i<a;i++)
        {
            r=n%10;
            n=n/10;
            sum+=r;
        }
        if(sum%3==0)
        {
            printf("%lld sim\n");
        }
        else
        {
            printf("%lld nao\n");
        }
    }
}
