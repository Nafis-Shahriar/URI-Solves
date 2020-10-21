#include<stdio.h>
int main()
{
    double t,a,b,i,c=0,d;
    scanf("%lf",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lf%lf",&a,&b);
        if(b>c)
        {
            c=b;
            d=a;
        }
    }
    if(c>=8)
    {
        printf("%.0lf\n",d);
    }
    else
    {
        printf("Minimum note not reached\n");
    }
    return 0;
}
