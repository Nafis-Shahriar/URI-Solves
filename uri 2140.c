#include<stdio.h>
int main()
{
    int a,b,i,j,s,k,ara[6]= {2,5,10,20,50,100};
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==0&&b==0)
        {
            break;
        }
        s=b-a;
        for(i=0,k=0; i<6; i++)
        {
            for(j=0; j<6; j++)
            {
                if(i!=j&&(ara[i]+ara[j])==s)
                {
                    k=1;
                }
            }
        }
        if(k==1)
        {
            printf("possible\n");
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}
