#include<stdio.h>
int main()
{
    int a,b,q,r;
    scanf("%d%d",&a,&b);
    q=a/b;
    r=a%b;
    if(a<0&&a%b!=0)
    {
        r=0;
        while(1)
        {
            if(a%b==0)
            {
                q=a/b;
                break;
            }
            a--;
            r++;
        }
    }
    printf("%d %d\n",q,r);
    return 0;
}
