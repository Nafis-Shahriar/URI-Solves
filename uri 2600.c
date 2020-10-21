#include<stdio.h>
int main()
{
    int i,n,a,b,k,c,d,j,e,f,ar[10];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        memset(ar,0,sizeof(ar));
        k=0;
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
        if(a<7&&b<7&&c<7&&d<7&&e<7&&f<7)
        {
            ar[a]=1;
            ar[b]=1;
            ar[c]=1;
            ar[d]=1;
            ar[e]=1;
            ar[f]=1;
        }
        for(j=1; j<=6; j++)
        {
            if(ar[j]==0)
            {
                k=1;
                break;
            }
        }
        if(a+f==7&&b+d==7&&c+e==7&&k!=1)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
    }
    return 0;
}
