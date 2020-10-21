#include<stdio.h>
int main()
{
    int i,count1=0,count2=0,count3=0,count4=0,ara[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]%2==0)
        {
            count1+=1;
        }
        if(ara[i]%2!=0)
        {
            count2+=1;
        }
        if(ara[i]>0)
        {
            count3+=1;
        }
        if(ara[i]<0)
        {
            count4+=1;
        }
    }
    printf("%d valor(es) par(es)\n",count1);
    printf("%d valor(es) impar(es)\n",count2);
    printf("%d valor(es) positivo(s)\n",count3);
    printf("%d valor(es) negativo(s)\n",count4);
    return 0;
}
