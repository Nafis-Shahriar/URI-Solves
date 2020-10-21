#include<stdio.h>
int main()
{
    int i,l;
    char str[12],temp;
    scanf("%s",str);
    l=strlen(str);
    {
        for(i=0; i<l/2; i++)
        {
            temp=str[i];
            str[i]=str[l-i-1];
            str[l-i-1]=temp;
        }
    }
    printf("%s\n",str);
    return 0;
}
