#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c;
    char m[10],n[10],o[10];
    while(scanf("%s%s%s",m,n,o)!=EOF)
    {
        a=strcmp(m,n);
        b=strcmp(n,o);
        c=strcmp(m,o);
        if(a==0&&b==0)
        {
            printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
        }
        else if(a==0&&m[1]!='a')
        {
            printf("Urano perdeu algo muito precioso...\n");
        }
        else if(b==0)
        {
            printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
        }
        else if(c==0)
        {
            printf("Iron Maiden’s gonna get you, no matter how far!\n");
        }
        else
        {
            printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
        }
        getchar();
    }
    return 0;
}
