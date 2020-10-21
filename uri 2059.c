#include<stdio.h>
int main()
{
    int a,b,c,d,e,k=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(d==0&&e==1||d==1&&e==0)
    {
        k=1;
    }
    else if(d==1&&e==1)
    {
        k=0;
    }
    else if((b+c)%2!=a)
    {
        k=1;
    }
    if(k==1)
    {
        printf("Jogador 1 ganha!\n");
    }
    else
    {
        printf("Jogador 2 ganha!\n");
    }
    return 0;
}
