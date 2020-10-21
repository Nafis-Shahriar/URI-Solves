#include<stdio.h>
int main()
{
    int n,ara[1000],i,min,p;
    scanf("%d",&n);
    min=ara[0];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);

        if(ara[i]<min)
        {
            min=ara[i];
            p=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,p);

    return 0;
}
