#include<stdio.h>
int main()
{
    int a,b,c,h;
    scanf("%d%d%d",&a,&b,&c);
    h=a+b+c;
    if(h<0)
    {
        h=h+24;
    }
    else if(h>24)
    {
        h=h-24;
    }
    printf("%d\n",h);
    return 0;
}
