#include<stdio.h>
int main()
{
    int m,n,i,a,p,sum;
    char s[30];
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==0)
        {
            break;
            if(m==0)
            {
                break;
            }
        }
        for(i=0,sum=0;i<n;i++)
        {
            scanf("%s%d",s,&a);
            sum+=a%3;
        }
        printf("%d\n",sum/2);
    }
    return 0;
}
