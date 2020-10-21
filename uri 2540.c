#include<stdio.h>
int main()
{
    int n,m,i,count;
    double d,s;
    while(scanf("%d",&n)==1)
    {
        count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&m);
            if(m==1)
            {
                count++;
            }
        }
        d=(double)count/n;
        s=2.0/3.0;
        printf("%lf %lf ",d,s);
        if(d>=s)
        {
            printf("impeachment\n");
        }
        else
        {
            printf("acusacao arquivada\n");
        }
    }
    return 0;
}
