#include<stdio.h>
int main()
{
    double a,b,p;
    scanf("%lf%lf",&a,&b);
    p=((b-a)/a)*100.0;
    printf("%.2lf%%\n",p);
    return 0;
}
