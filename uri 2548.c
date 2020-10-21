#include<stdio.h>
int main()
{
    int i,n,a,sum,d;
    while(scanf("%d%d",&n,&a)!=EOF){
    sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&d);
        if(i>=n-a)
        {
            sum=sum+d;
        }
    }
    printf("%d\n",sum);}
    return 0;
}
