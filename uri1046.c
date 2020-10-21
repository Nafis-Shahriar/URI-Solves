#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d%d",&A,&B);
    if(A==B)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(A<B)
    {
        printf("O JOGO DUROU %d HORA(S)\n",B-A);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n",24-A+B);
    }
    return 0;
}
