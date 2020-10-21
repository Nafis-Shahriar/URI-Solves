#include<stdio.h>
int main()
{
    int n,i;
    char s[25];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(s);
        printf("*\n");
    }
    return 0;
}
