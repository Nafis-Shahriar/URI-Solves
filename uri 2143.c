#include<stdio.h>
int main()
{
    int n,a,i;
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        for(i=0; i<n; i++)
        {
            scanf("%d",&a);
            if(a<=2)
            {
                printf("%d\n",a);
            }
            else if(a%2==0)
            {
                printf("%d\n",2*a-2);
            }
            else
            {
                printf("%d\n",2*a-1);
            }
        }
    }
    return 0;
}
