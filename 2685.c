#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==270)
        {
            printf("De Madrugada!!\n");
        }
        else if(n==90)
        {
            printf("Boa Tarde!!\n");
        }
        else if(n>90&&n<270)
        {
            printf("Boa Noite!!\n");
        }
        else
        {
            printf("Bom Dia!!\n");
        }
    }
    return 0;
}
