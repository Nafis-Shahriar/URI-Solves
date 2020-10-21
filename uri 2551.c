#include<stdio.h>
int main()
{
    int n,a,b,j,i,ara[35];
    double d,m;
    while(scanf("%d",&n)==1)
    {
        m=0;
        i=0;
        for(j=0;j<n;j++)
        {
            scanf("%d%d",&a,&b);
            d=(double)b/a;
            if(d>m)
            {
                ara[i]=j+1;
                i++;
                m=d;
            }
        }
        for(j=0;j<i;j++)
        {
            printf("%d\n",ara[j]);
        }
    }
    return 0;
}
