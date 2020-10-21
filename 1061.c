#include<stdio.h>
int main()
{
    char str[5];
    int d1,d2,h1,h2,m1,m2,s1,s2,d,h,m,s;
    scanf("%s %d",str,&d1);
    scanf("%d : %d : %d",&h1,&m1,&s1);
    scanf("%s %d",str,&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);
    d=d2-d1;
    h=h2-h1;
    if(h<0)
    {
        h+=24;
        d--;
    }
    m=m2-m1;
    if(m<0)
    {
        m+=60;
        h--;
    }
    s=s2-s1;
    if(s<0)
    {
        s+=60;
        m--;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);
    return 0;
}
