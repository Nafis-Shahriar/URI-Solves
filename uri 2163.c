#include<stdio.h>
int main()
{
    int n,i,j,x,y,a,b,ara[100][1000];
    scanf("%d%d",&a,&b);
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(ara[i][j]==42&&ara[i][j-1]==7&&ara[i][j+1]==7&&ara[i-1][j]==7&&ara[i+1][j]==7&&ara[i+1][j+1]==7&&ara[i-1][j-1]==7&&ara[i-1][j+1]==7&&ara[i+1][j-1]==7)
            {
                x=i+1;
                y=j+1;
            }
            else
            {
                x=0;
                y=0;
            }
        }
    }
    printf("%d %d\n",x,y);
    return 0;
}
