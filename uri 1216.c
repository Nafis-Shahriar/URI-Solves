#include<stdio.h>
int main()
{
    double n,i=0,sum=0;
    char str[100];
    while(str[0]!=EOF)
    {
        sum=0;
        while(i<3)
        {
            gets(str);
            scanf("%d",&n);
            getchar();
            sum=sum+n;
            i++;
        }
        printf("%.1lf\n",sum/3.0);
        i=0;
    }
    return 0;
}
