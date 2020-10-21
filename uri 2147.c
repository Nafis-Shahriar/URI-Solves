#include<stdio.h>
int strlnth(char x[])
{
    int count=0,i;
    for(i=0; x[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    int n,i;
    double ara[100];
    char s[1000000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        gets(s);
        ara[i]=(double)strlnth(s)*.01;
    }
    for(i=0;i<n;i++)
    {
        printf("%.2lf\n",ara[i]);
    }
    return 0;
}


