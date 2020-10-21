#include<stdio.h>
int main()
{
    int i,j,n,m,l,cm,cl,a,ara1[100][100],ara2[100][100];
    while(scanf("%d%d%d",&n,&m,&l)!=EOF)
    {
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf("%d",&ara1[i][j]);
            }
        }
        for(i=1; i<=l; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf("%d",&ara2[i][j]);
            }
        }
        scanf("%d%d%d",&cm,&cl,&a);
        if(ara1[cm][a]>ara2[cl][a])
        {
            printf("Marcos\n");
        }
        else if(ara1[cm][a]<ara2[cl][a])
        {
            printf("Leonardo\n");
        }
        else
        {
            printf("Empate\n");
        }
    }
    return 0;
}
