#include<stdio.h>
int main()
{
    double n,a,b;
    scanf("%lf",&n);
    a=n/log(n);
    b=a*1.25506;
    printf("%.1lf %.1lf\n",a,b);
    return 0;
}
