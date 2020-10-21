#include<stdio.h>
int main()
{
    long long i=0,n,r;
    char num[12];
    scanf("%lld",&n);
    while(n>0)
    {
        r=n%16;
        if(r<10)
        {
            num[i]=r+48;
        }
        else
        {
            num[i]=r+55;
        }
        i++;
        n=n/16;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%c",num[i]);
    }
    printf("\n");
    return 0;
}
