#include<stdio.h>
int main()
{
    double A,B,C,Tri,pi=3.14159,Cir,Tra,Sq,Rect;
    scanf("%lf%lf%lf",&A,&B,&C);
    Tri=.5*A*C;
    Cir=pi*C*C;
    Tra=.5*(A+B)*C;
    Sq=B*B;
    Rect=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",Tri,Cir,Tra,Sq,Rect);
    return 0;
}
