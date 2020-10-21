#include<stdio.h>
int main()
{
    int n,i,j;
    char s[100];
    double m,a[7],max,min,sum,num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%lf",s,&m);
        scanf("%lf",&a[0]);
        sum=a[0];
        max=a[0];
        min=a[0];
        for(j=1;j<7;j++)
        {
            scanf("%lf",&a[j]);
            sum+=a[j];
            if(a[j]>max)
            {
                max=a[j];
            }
            if(a[j]<min)
            {
                min=a[j];
            }
        }
        num=(sum-max-min)*m;
        printf("%s %.2lf\n",s,num);
    }
    return 0;
}
