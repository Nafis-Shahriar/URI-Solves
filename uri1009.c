#include<stdio.h>
int main()
{
        char name[10];
        double SALARY,VALUE,TOTAL;
        scanf("%s",&name);
        scanf("%lf%lf",&SALARY,&VALUE);
        TOTAL=SALARY+VALUE*15/100;
        printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;

}
