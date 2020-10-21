#include<stdio.h>
int main()
{
    double n,n1,n2,n3,n4,avg,favg;
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
    avg=(n1*2+n2*3+n3*4+n4*1)/(2+3+4+1);
    printf("Media: %.1lf\n",avg);
    if(avg>=7)
    {
        printf("Aluno aprovado.\n");
    }
    if(avg<5)
    {
        printf("Aluno reprovado.\n");
    }
    if(avg>=5&&avg<7)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&n);
        printf("Nota do exame:%lf\n",n);
        favg=(avg+n)/2;
        if(favg>=5)
        {
            printf("Aluno aprovado.\n");
        }
        if(favg<5)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",favg);
    }
    return 0;
}
