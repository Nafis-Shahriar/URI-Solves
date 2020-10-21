#include<stdio.h>
int main()
{
    double n,S=1,s=0,i;
    scanf("%lf",&n);
    for(i=0;i<n;i++)
    {
        s+=2;
        s=1/s;
    }
    S+=s;
    printf("%.10lf\n",S);
    return 0;
}
