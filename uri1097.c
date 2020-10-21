#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1,k=7;i<=9;i++,k++)
    {
        for(j=1;j<=3;j++)
        {

            k--;
            printf("I=%d J=%d\n",i,k);
        }


    }

    return 0;
}
