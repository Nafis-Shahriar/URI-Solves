#include<stdio.h>
#include<string.h>
int a[1000005],b[1000005];
int main()
{
    int i=0,j,y,k,c=0;
    char ch;
    while((ch=getchar())!=EOF)
    {
        k=0;
        i=0;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        if(ch=='(')
        {
            a[i]++;
        }
        else if(ch==')')
        {
            b[i]++;
        }
        i++;
        putchar(ch);
        while((ch=getchar())!='\n')
        {
            putchar(ch);
            if(ch=='(')
            {
                a[i]++;
            }
            else if(ch==')')
            {
                b[i]++;
            }
        }
        for(j=0; j<i; j++)
        {
            if(a[i]==a[j]&&b[i]==b[j])
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
            c++;
            printf("%d\n",c);
        }
    }
    printf("%d\n",c);
    return 0;
}
