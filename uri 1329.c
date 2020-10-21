#include<stdio.h>
int main()
{
    int n,a,i,c1,c2;
    while(scanf("%d",&n)==1)
    {
        c1=c2=0;
        if(n==0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a==0)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        printf("Mary won %d times and john won %d times\n",c1,c2);
    }
    return 0;
}
