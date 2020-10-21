#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,H,M;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    H=h2-h1;
    M=m2-m1;
    if(H==0&&M==0)
    {
        H=24;
    }
    if(M<0)
    {
        H=H-1;
        M=60+M;
    }
    if(H<0)
    {
        H=24+H;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    return 0;
}
