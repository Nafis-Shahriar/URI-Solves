#include<stdio.h>
int main()
{
   int n,n1,n2,n3,n4,n5,n6,n7,r1,r2,r3,r4,r5;
   scanf("%d",&n);
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
   n7=r5%2;
   printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",n,n1,n2,n3,n4,n5,n6,n7);
   return 0;
}
