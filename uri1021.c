#include<stdio.h>
int main()
{
   int n,n1,n2,n3,n4,n5,n6,c1,c2,c3,c4,c5,c6,r1,r2,r3,r4,r5,R1,R2,R3,C1,C2;
   double N;
   scanf("%lf",&N);
   n=N;
   n1=n/100;
   r1=n%100;
   n2=r1/50;
   r2=r1%50;
   n3=r2/20;
   r3=r2%20;
   n4=r3/10;
   r4=r3%10;
   n5=r4/5;
   r5=r4%5;
   n6=r5/2;
   c1=r5%2;
   C1=(int)(N*100);
   C2=C1%100;
   c2=C2/50;
   R1=C2%50;
   c3=R1/25;
   R2=R1%25;
   c4=R2/10;
   R3=R2%10;
   c5=R3/5;
   c6=R3%5;
   printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",n1,n2,n3,n4,n5,n6);
   printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",c1,c2,c3,c4,c5,c6);
   return 0;
}
