#include<stdio.h>
int main()
{
    int h,m,t,H,M;
    while(scanf("%d:%d",&h,&m)!=EOF)
    {
        H=h-7;
        if(H==0)
        {
            M=m;
        }
        else if(H<0)
        {
            M=0;
        }
        else
        {
            M=H*60+m;
        }
        printf("Atraso maximo: %d\n",M);
    }
    return 0;
}
