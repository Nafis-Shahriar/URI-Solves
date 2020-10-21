#include<stdio.h>
int main()
{
    int i,ara[5],count=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]%2==0)
        {
            count+=1;
        }
    }
    printf("%d valores pares\n",count);

    return 0;
}
