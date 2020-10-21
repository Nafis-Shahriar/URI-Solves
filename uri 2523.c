#include<stdio.h>
int main()
{
    char c[26];
    int i,j,n,a[1000];
    while(scanf("%s",c)!=EOF)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(i=0;i<n;i++)
        {
            printf("%c",c[a[i]-1]);
        }
        printf("\n");
    }
    return 0;
}
