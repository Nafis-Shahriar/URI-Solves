#include<stdio.h>
int main()
{
    int n,i,a,max,min,count;
    while(scanf("%d%d%d",&n,&min,&max)!=EOF)
    {
        count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a>=min&&a<=max)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
