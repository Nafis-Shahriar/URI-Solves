#include<stdio.h>
int main()
{
    char n[101];
    int count=0,i;
    scanf("%s",n);
    for(i=0;n[i]!='\0';i++)
    {
        if(n[i]=='1')
        {
            count++;
        }
    }
    printf("%s%d\n",n,count%2);
    return 0;
}
