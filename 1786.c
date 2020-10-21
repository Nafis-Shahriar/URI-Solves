#include<stdio.h>
int main()
{
    int i,b1,b2;
    char a[15];
    while(scanf("%s",a)!=EOF)
    {
        b1=0;
        b2=0;
        for(i=0;i<9;i++)
        {
            b1+=(a[i]-48)*(i+1);
            b2+=(a[i]-48)*(9-i);
        }
        b1=b1%11;
        b2=b2%11;
        if(b1==10)
        {
            b1=0;
        }
        if(b2==10)
        {
            b2=0;
        }
        for(i=0;i<9;i++)
        {
            printf("%c",a[i]);
            if(i%3==2&&i<8)
            {
                printf(".");
            }
        }
        printf("-%d%d\n",b1,b2);
    }
    return 0;
}
