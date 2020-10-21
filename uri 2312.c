#include<stdio.h>
int main()
{
    int a,b,c,k;

    scanf("%d%d%d",&a,&b,&c);

    if(a+b<=c||b+c<=a||c+a<=b)
    {
        printf("Invalido\n");
    }
    else if(a==b&&b==c)
    {
        printf("Valido-Equilatero\n");
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        {
            printf("Retangulo: S\n");
        }
        else
        {
            printf("Retangulo: N\n");
        }
    }
    else if(a==b||b==c||a==c)
    {
        printf("Valido-Isoceles\n");
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        {
            printf("Retangulo: S\n");
        }
        else
        {
            printf("Retangulo: N\n");
        }
    }
    else
    {
        printf("Valido-Escaleno\n");
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        {
            printf("Retangulo: S\n");
        }
        else
        {
            printf("Retangulo: N\n");
        }

    }
    return 0;

}
