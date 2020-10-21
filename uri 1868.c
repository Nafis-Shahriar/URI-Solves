#include<stdio.h>
int main()
{
    int n,i;
    char S[34]= {'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            printf("%c",S[i]);
        }
        printf("\n");
    }
    return 0;
}
