#include<stdio.h>
int main()
{
    int n,i,x,count=0,num=100,c;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d",&n);
        count++;
        if(n<num)
        {
            num=n;
            c=count;
        }
    }
    printf("%d\n%d\n",num,c);
    return 0;
}
