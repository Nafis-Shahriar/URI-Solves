#include<stdio.h>
int main()
{
    int X,Y,i;
    scanf("%d%d",&X,&Y);
    for( ; ; )
    {
    if(X>Y)
    {
        printf("Decrescente");

    }
    if(X<Y)
    {
        printf("Crescente");

    }
    if(X==Y)
    {
        break;
    }
    }
    return 0;
}
