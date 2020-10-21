#include<stdio.h>
int main()
{
    int t,i,k=0;
    char a[10],b[10];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        getchar();
        k=0;
        scanf("%s%s",a,b);
        if(strcmp(a,b)==0)
        {
            printf("Caso #%d: De novo!\n",i);
        }
        else if(strcmp(a,"tesoura")==0&&strcmp(b,"papel")==0)
        {
            k=1;
        }
        else if(strcmp(b,"tesoura")==0&&strcmp(a,"papel")==0)
        {
            k=2;
        }
        else if(strcmp(b,"papel")==0&&strcmp(a,"pedra")==0)
        {
            k=2;
        }
        else if(strcmp(b,"pedra")==0&&strcmp(a,"papel")==0)
        {
            k=1;
        }
        else if(strcmp(b,"pedra")==0&&strcmp(a,"lagarto")==0)
        {
            k=2;
        }
        else if(strcmp(b,"lagarto")==0&&strcmp(a,"pedra")==0)
        {
            k=1;
        }
        else if(strcmp(b,"lagarto")==0&&strcmp(a,"spock")==0)
        {
            k=2;
        }
        else if(strcmp(b,"spock")==0&&strcmp(a,"lagarto")==0)
        {
            k=1;
        }
        else if(strcmp(b,"spock")==0&&strcmp(a,"tesoura")==0)
        {
            k=2;
        }
        else if(strcmp(b,"tesoura")==0&&strcmp(a,"spock")==0)
        {
            k=1;
        }
        else if(strcmp(b,"tesoura")==0&&strcmp(a,"lagarto")==0)
        {
            k=2;
        }
        else if(strcmp(a,"tesoura")==0&&strcmp(b,"lagarto")==0)
        {
            k=1;
        }
        else if(strcmp(b,"lagarto")==0&&strcmp(a,"papel")==0)
        {
            k=2;
        }
        else if(strcmp(a,"lagarto")==0&&strcmp(b,"papel")==0)
        {
            k=1;
        }
        else if(strcmp(a,"spock")==0&&strcmp(b,"papel")==0)
        {
            k=2;
        }
        else if(strcmp(b,"spock")==0&&strcmp(a,"papel")==0)
        {
            k=1;
        }
        else if(strcmp(b,"Spock")==0&&strcmp(a,"pedra")==0)
        {
            k=2;
        }
        else if(strcmp(b,"Pedra")==0&&strcmp(a,"spock")==0)
        {
            k=1;
        }
        else if(strcmp(b,"pedra")==0&&strcmp(a,"tesoura")==0)
        {
            k=2;
        }
        else if(strcmp(b,"tesoura")==0&&strcmp(a,"pedra")==0)
        {
            k=1;
        }
        if(k==1)
        {
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if(k==2)
        {
            printf("Caso #%d: Raj trapaceou!\n",i);
        }
    }
    return 0;
}
