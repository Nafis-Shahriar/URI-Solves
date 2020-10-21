#include<stdio.h>
int main()
{
    double S,t,a;
    scanf("%lf",&S);
    if(S>=0&&S<=2000)
    {
        printf("Isento\n");
    }
    else
    {
        if(S>2000&&S<=3000)
        {
            t=(S-2000)*0.08;
        }
        if(S>3000&&S<=4500)
        {
            t=1000*(8/100.0)+(S-3000)*(18/100.0);
        }
        if(S>4500)
        {
            t=1000*(8/100.0)+1500*(18/100.0)+(S-4500)*(28/100.0);
        }
        printf("R$ %.2lf\n",t);
    }
    return 0;
}

