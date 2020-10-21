#include<stdio.h>
int main()
{
    int n,count;
    while(scanf("%d",&n)==1)
    {
        count=0;
        while(n>1)
        {
            n=n/2;
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
