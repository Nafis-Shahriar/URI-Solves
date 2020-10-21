#include<stdio.h>
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==m)
        {
            printf("%d\n",n);
        }
        else if(n>m)
        {
            printf("%d\n",n);
        }
        else
        {
            printf("%d\n",m);
        }
    }
    return 0;
}
