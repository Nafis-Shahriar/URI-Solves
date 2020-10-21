#include<stdio.h>
int main()
{
    int n,i,t,b,a[100],k=0;
    scanf("%d%d",&n,&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t-1;i++)
    {
        b=abs(a[i]-a[i+1]);
        if(b>n)
        {
            k=1;
            break;
        }
    }
    if(k==0)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("GAME OVER\n");
    }
    return 0;
}
