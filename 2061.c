#include<stdio.h>
int main()
{
    int n,a,i,count1=0,count2=0;
    scanf("%d%d",&a,&n);
    char ch[10];
    for(i=0;i<n;i++)
    {
        scanf("%s",ch);
        if(strcmp(ch,"fechou")==0)
        {
            count1++;
        }
        else if(strcmp(ch,"clicou")==0)
        {
            count2++;
        }
    }
    printf("%d\n",a+count1-count2);
}
