#include<stdio.h>
long long perm(long long x)
{
    long long p=1;
    while(x>0)
    {
        p=p*x;
        x--;
    }
    return p;
}
int main()
{
    long long l,m,i,j,sum,c;
    char s[16];
    while(scanf("%s",s)!=EOF&&s[0]!='0')
    {
        l=strlen(s);
        sum=1;
        for(i=0; i<l; i++)
        {
            if(s[i]!='0')
            {
                c=0;
                for(j=i; j<l; j++)
                {
                    if(s[i]==s[j])
                    {
                        if(j!=i){
                            s[j]='0';
                        }
                        c++;
                    }
                }
                sum*=perm(c);
            }
        }
        m=perm(l)/sum;
        printf("%lld\n",m);
    }
    return 0;
}
