#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n>=1001&&n<=9999)
        {
            printf("%d\n",n-1);
        }

    }
    return 0;
}
