#include<stdio.h>
int main()
{
    double A,B,C,x,y,z;
    scanf("%lf%lf%lf",&x,&y,&z);
    if(x>=y&&x>=z)
    {
        if(y>=z)
        {
            A=x;
            B=y;
            C=z;
        }
        else
        {
            A=x;
            B=z;
            C=y;
        }

    }
    else if(y>=x&&y>=z)
    {
        if(x>=z)
        {
            A=y;
            B=x;
            C=z;
        }
        else
        {
            A=y;
            B=z;
            C=x;
        }
    }
    else if(z>=x&&z>=y)
    {
        if(x>=y)
        {
            A=z;
            B=x;
            C=y;
        }
        else
        {
            A=z;
            B=y;
            C=x;
        }
    }
    if(A>=B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(A*A==B*B+C*C)
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if(A*A>B*B+C*C)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if(A*A<B*B+C*C)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(x==y&&x==z)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(A==B&&A!=C||A==C&&A!=B||B==C&&B!=A)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
