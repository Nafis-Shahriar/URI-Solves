#include<stdio.h>
int main()
{
    char s[100];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%s",s);
       gets(s);
       printf("I am Toorg!\n");
       printf("%s\n",s);
    }
    return 0;

}
