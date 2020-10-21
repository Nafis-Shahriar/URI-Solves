#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double fib,a,b;
    scanf("%d",&n);
    a=(1+sqrt(5))/2;
    b=(1-sqrt(5))/2;
    fib=(pow(a,n)-pow(b,n))/sqrt(5);
    printf("%0.1lf\n",fib);
    return 0;
}
