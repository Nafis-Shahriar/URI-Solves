#include<stdio.h>
int main()
{
   double a,b,d,x1,x2,y1,y2;
   scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
   a=x2-x1;
   b=y2-y1;
   d=sqrt(a*a+b*b);
   printf("%.4lf",d);
   return 0;
}
