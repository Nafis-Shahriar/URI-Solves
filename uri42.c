#include<stdio.h>
int main()
{
    int x,y,z,a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        if(b>c)
        {
            x=a;
            y=b;
            x=c;
        }
        else
        {
            x=a;
            y=c;
            z=b;
        }

    }
    if(b>a&&b>c)
    {
        if(a>c)
        {
           x=b;
           y=a;
           z=c;
        }
        else
        {
           x=b;
           y=c;
           z=a;
        }
    }
    if(c>a&&c>b)
    {
        if(a>b)
        {
           x=c;
           y=a;
           z=b;
        }
        else
        {
           x=c;
           y=b;
           z=a;
        }
    }
    printf("%d\n%d\n%d\n",z,y,x);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);

    return 0;

}
