#include<stdio.h>
int main()
{
    int a,b,i;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        for(i=1;((b*i)-(a*i))<a;i++)
        {

        }
        printf("%d",i+1);
    }
    return 0;
}
