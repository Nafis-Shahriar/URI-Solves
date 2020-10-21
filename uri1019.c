#include<stdio.h>
int main()
{
    int N,H,M,S,R;
    scanf("%d",&N);
    H=N/3600;
    R=N%3600;
    M=R/60;
    S=R%60;
    printf("%d:%d:%d",H,M,S);
    return 0;

}
