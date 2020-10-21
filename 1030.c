#include<stdio.h>
int main()
{
    int a[10005],i,j,n,m,t,c,k;
    scanf("%d",&t);
    while(t!=0)
    {
        t--;
        memset(a,0,sizeof(a));
        scanf("%d%d",&n,&m);
        for(i=0; i<n; i++)
        {
            c=0;
            while(i!=0)
            {
                i++;
                c++;
                if(i==n-1)
                {
                    i=0;
                }
            }
            if(c==n-1)
            {
                k=i;
            }
            break;
            a[i+m-2]=1;
        }
        printf("%d\n",k);
    }
}
