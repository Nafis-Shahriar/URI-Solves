#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l,j,c;
    char s[1125];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(s);
        l=strlen(s);
        for(j=0,c=0;j<l;j++)
        {
            if(s[j]=='G'||s[j]=='Q'||s[j]=='a'||s[j]=='k'||s[j]=='u')
            {
                printf("0");
                c++;
            }
            else if(s[j]=='I'||s[j]=='S'||s[j]=='b'||s[j]=='l'||s[j]=='v')
            {
                printf("1");
                c++;
            }
            else if(s[j]=='E'||s[j]=='O'||s[j]=='Y'||s[j]=='c'||s[j]=='m'||s[j]=='w')
            {
                printf("2");
                c++;
            }
            else if(s[j]=='F'||s[j]=='P'||s[j]=='Z'||s[j]=='d'||s[j]=='n'||s[j]=='x')
            {
                printf("3");
                c++;
            }
            else if(s[j]=='J'||s[j]=='T'||s[j]=='e'||s[j]=='o'||s[j]=='y')
            {
                printf("4");
                c++;
            }
            else if(s[j]=='D'||s[j]=='N'||s[j]=='X'||s[j]=='f'||s[j]=='p'||s[j]=='z')
            {
                printf("5");
                c++;
            }
            else if(s[j]=='A'||s[j]=='K'||s[j]=='U'||s[j]=='g'||s[j]=='q')
            {
                printf("6");
                c++;
            }
            else if(s[j]=='C'||s[j]=='M'||s[j]=='W'||s[j]=='h'||s[j]=='r')
            {
                printf("7");
                c++;
            }
            else if(s[j]=='B'||s[j]=='L'||s[j]=='V'||s[j]=='i'||s[j]=='s')
            {
                printf("8");
                c++;
            }
            else if(s[j]=='H'||s[j]=='R'||s[j]=='j'||s[j]=='t')
            {
                printf("9");
                c++;
            }
            if(c==12)
            {
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
