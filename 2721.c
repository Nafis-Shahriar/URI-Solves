#include<stdio.h>
int main()
{
    int a,i,s=0;
    for(i=0;i<9;i++)
    {
        scanf("%d",&a);
        s+=a;
    }
    s=s%9;
    if(s==0)
    {
        printf("Rudolph\n");
    }
    else if(s==1)
    {
        printf("Dasher\n");
    }
    else if(s==2)
    {
        printf("Dancer\n");
    }
    else if(s==3)
    {
        printf("Prancer\n");
    }
    else if(s==4)
    {
        printf("Vixen\n");
    }
    else if(s==5)
    {
        printf("Comet\n");
    }
    else if(s==6)
    {
        printf("Cupid\n");
    }
    else if(s==7)
    {
        printf("Donner\n");
    }
    else if(s==8)
    {
        printf("Blitzen\n");
    }
    return 0;
}
