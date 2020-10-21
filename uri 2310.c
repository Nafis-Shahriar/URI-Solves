#include<stdio.h>
int main()
{
    int i,n,a,b,c,x,y,z,s1=0,s2=0,s3=0,t1=0,t2=0,t3=0;
    char s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        scanf("%d%d%d",&a,&b,&c);
        scanf("%d%d%d",&x,&y,&z);
        s1+=a;
        s2+=b;
        s3+=c;
        t1+=x;
        t2+=y;
        t3+=z;
    }
    printf("Pontos de Saque: %.2lf %%.\n",((double)t1/s1)*100);
    printf("Pontos de Bloqueio: %.2lf %%.\n",((double)t2/s2)*100);
    printf("Pontos de Ataque: %.2lf %%.\n",((double)t3/s3)*100);
    return 0;
}



