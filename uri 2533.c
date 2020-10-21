#include<stdio.h>
int main()
{
    int i,n,a,b;
    double s,sum,sum2;
    while(scanf("%d",&n)==1)
    {
        sum=sum2=0;
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&a,&b);
            sum+=a*b;
            sum2+=b;
        }
        s=sum/(sum2*100.0);
        printf("%.4lf\n",s);
    }
    return 0;
}
