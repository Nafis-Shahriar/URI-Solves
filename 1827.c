#include<stdio.h>
int a[105][105];
int main()
{
    int n,i,j;
    while(scanf("%d",&n)==1)
    {
        memset(a,0,sizeof(a));
        for(i=0; i<n; i++)
        {
            if(i<n/3||i>n*2/3||n%3==0&&i==n*2/3)
            {
                a[i][i]=2;
                a[i][n-i-1]=3;
            }
            else
            {
                for(j=n/3; j<n-n/3; j++)
                {
                    a[i][j]=1;
                }
            }
        }
        a[n/2][n/2]=4;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

