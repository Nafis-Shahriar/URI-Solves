#include<stdio.h>
int main()
{
    int p;
    double S,NS,IS;
    scanf("%lf",&S);
    if(S>=0&&S<=400)
    {
        p=15;
        NS=S+S*(p/100.0);
    }
    if(S>400&&S<=800)
    {
        p=12;
        NS=S+S*(p/100.0);
    }
    if(S>800&&S<=1200)
    {
        p=10;
        NS=S+S*(p/100.0);
    }
    if(S>1200&&S<=2000)
    {
        p=7;
        NS=S+S*(p/100.0);
    }
    if(S>2000)
    {
        p=4;
        NS=S+S*(p/100.0);
    }
    IS=NS-S;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual %d %c \n",NS,IS,p,37);
}
