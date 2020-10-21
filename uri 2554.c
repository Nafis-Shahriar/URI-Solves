#include<stdio.h>
int main()
{
    int a,n,b,i,j,d,m,y,k,l,D,M,Y;
    while(scanf("%d%d",&n,&b)==2)
    {
        for(i=0,l=0;i<b;i++)
        {
            scanf("%d/%d/%d",&d,&m,&y);
            for(j=0,k=0;j<n;j++)
            {
                scanf("%d",&a);
                if(a==1)
                {
                    k++;
                }
            }
            if(k==n&&l==0)
            {
                l=1;
                D=d;
                M=m;
                Y=y;
            }
        }
        if(l==0)
        {
            printf("Pizza antes de FdI\n");
        }
        else
        {
            printf("%d/%d/%d\n",D,M,Y);
        }
    }
    return 0;
}
