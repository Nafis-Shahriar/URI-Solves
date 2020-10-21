#include<stdio.h>
int main()
{
    int n,r,R,j,i,count;
    while(scanf("%d%d",&n,&r)==2)
    {
        count=0;
        for(i=0; i<n; i++)
        {
            scanf("%d%d",&R,&j);

            if(R==r&&j==0)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
