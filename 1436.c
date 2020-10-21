#include<stdio.h>
int main()
{
    int n,i,m,j,k,a[105][105];
    while(scanf("%d",&n)==1&&n!=0)
    {
        m=n;
        memset(a,0,sizeof(a));
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                a[i][j]=abs(i-j)+1;
            }
        }
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=m; j++)
            {
                printf("%3d",a[i][j]);
                if(j!=m)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
