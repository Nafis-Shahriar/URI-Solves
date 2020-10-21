#include<stdio.h>
int a[1005][1005];
int main()
{
    int n,m,i,j,x=0,y=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==42&&a[i][j+1]==7&&a[i+1][j]==7&&a[i-1][j]==7&&a[i][j-1]==7&&a[i+1][j+1]==7&&a[i-1][j-1]==7&&a[i-1][j+1]==7&&a[i+1][j-1]==7)
            {
                x=i+1;
                y=j+1;
                i=n;
                break;
            }
        }
    }
    printf("%d %d\n",x,y);
    return 0;
}
