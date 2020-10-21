#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a+b>c&&b+c>a&&c+a>b||a+b>d&&b+d>a&&d+a>b||d+b>c&&b+c>d&&c+d>b||a+d>c&&d+c>a&&c+a>d)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    return 0;
}
