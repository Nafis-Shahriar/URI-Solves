#include<stdio.h>
int main()
{
    int i,n,m;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        m=n*i;
        printf("%d x %d = %d\n",i,n,m);
    }
    return 0;
}
