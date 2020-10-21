#include<stdio.h>
int main()
{
    double d,v,r,l,a;
    while(scanf("%lf%lf",&v,&d)==2)
    {
        r=d/2;
        a=3.14*r*r;
        l=v/a;
        printf("ALTURA = %.2lf\nAREA = %.2lf\n",l,a);
    }
    return 0;
}

