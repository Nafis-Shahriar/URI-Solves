#include<stdio.h>
int main()
{
    int c,i;
    double n1,n2,n3,avg;
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        scanf("%lf%lf%lf",&n1,&n2,&n3);
        avg=(n1*2+n2*3+n3*5)/(2+3+5);
        printf("%.1lf\n",avg);
    }
    return 0;
}
