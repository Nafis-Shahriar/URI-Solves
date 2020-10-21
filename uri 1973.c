#include<stdio.h>
long long a[1000005];
int main()
{
    long long i,n,sum=0,l=1,c=0,count=0,k=1;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum=sum+a[i];
        if(a[0]%2==1)
        {
            l=0;
            if(a[i]%2==1&&k==1&&a[i]!=0)
            {
                count++;
                if(a[i]==1)
                {
                    c++;
                }
            }
            else
            {
                k=0;
            }
        }
    }
    if(l==0)
    {
        if(k==0)
        {
            sum=sum-2*count+c-1;
            count++;
        }
        else
        {
            sum=sum-count;
        }
    }
    else
    {
        if(a[0]!=0)
            sum=sum-1;
        count=1;
    }
    printf("%lld %lld\n",count,sum);
    return 0;
}
