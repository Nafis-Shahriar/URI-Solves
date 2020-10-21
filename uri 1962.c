#include<stdio.h>
int main()
{
    long long int n,i,m;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&m);
        if(m<2015)
        {
            printf("%lld D.C.\n",2015-m);
        }
        else
        {
            printf("%lld A.C.\n",m-2014);
        }
    }
    return 0;
}
