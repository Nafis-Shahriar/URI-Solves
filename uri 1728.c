#include<stdio.h>
int reverse(int x)
{
    int sum=0,r;
    while(x>0)
    {
        r=x%10;
        x=x/10;
        sum=sum*10;
        sum=sum+r;
    }
    return sum;
}
int main()
{
    int a,b,s;
    do
    {
        scanf("%d+%d=%d",&a,&b,&s);
        printf("%d ",reverse(a));
        if(reverse(a)+reverse(b)==reverse(s))
        {
            printf("True\n");
        }
        else if(reverse(a)+reverse(b)!=reverse(s))
        {
            printf("False\n");
        }
    }
    while(a!=0||b!=0||s!=0);
    return 0;
}
