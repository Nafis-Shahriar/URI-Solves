#include<stdio.h>
int main()
{
    int l;
    char str[500];
    gets(str);
    l=strlen(str);
    if(l<=80)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}


