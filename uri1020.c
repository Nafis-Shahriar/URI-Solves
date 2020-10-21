#include<stdio.h>
int main()
{
    int N,Y,M,D,R;
    scanf("%d",&N);
    Y=N/365;
    R=N%365;
    M=R/30;
    D=R%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",Y,M,D);
    return 0;

}
