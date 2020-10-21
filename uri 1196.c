#include<stdio.h>
int main()
{
    int i;
    char str[100];
    char *s="QWERTYUIOP[ASDFGHJKL;ZXCVBNM,";
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[i]=s[str[i]];
        }
    }
    printf("%s\n",str);
    return 0;
}
