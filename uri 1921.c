#include<stdio.h>
int main()
{
    long long n,i,m,sum=1;
    scanf("%lld",&n);
    m=n;
    for(i=0;i<2;i++)
    {
        sum*=n;
        n--;
    }
    sum=sum/2-m;
    printf("%lld\n",sum);
    return 0;
}
