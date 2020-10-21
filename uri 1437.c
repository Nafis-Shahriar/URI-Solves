#include<stdio.h>
int main()
{
    int n,i,c=0;
    char ch;
    while(scanf("%d",&n)==1&&n!=0)
    {
        getchar();
        c=0;
        for(i=0;i<n;i++)
        {
            scanf("%c",&ch);
            if(ch=='D')
            {
                c++;}
            if(ch=='E')
            {
                c--;
            }
            }
        c=c%4;

        if(c==0)
        {
            printf("N\n");
        }
        else if(c==1||c==-3)
        {
            printf("L\n");
        }
        else if(c==-1||c==3)
        {
            printf("S\n");
        }
        else
        {
            printf("O\n");
        }
        c=0;
    }
    return 0;
}

