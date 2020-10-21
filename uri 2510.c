#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char s[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",s);
        j=strlen(s);
        if(j>0&&j<=25)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;

}
