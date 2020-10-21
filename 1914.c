#include<stdio.h>
#include<string.h>
int main()
{
    int t,a,b,i;
    char s1[105],s2[105],aa[8],bb[8],str[4]="PAR";
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s %s %s %s",s1,aa,s2,bb);
        scanf("%d%d",&a,&b);
        if(strcmp(aa,str)==0)
        {
            if((a+b)%2==0)
            {
                printf("%s\n",s1);
            }
            else
            {
                printf("%s\n",s2);
            }
        }
        else
        {
            if((a+b)%2==1)
            {
                printf("%s\n",s1);
            }
            else
            {
                printf("%s\n",s2);
            }
        }
    }
    return 0;
}
