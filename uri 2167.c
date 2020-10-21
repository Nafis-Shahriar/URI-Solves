#include<stdio.h>
int main()
{
    int n,i,a[100],max,k=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[1];
    for(i=2;i<=n;i++)
    {
        if(a[i]<max)
        {
            k=i;
            break;
        }
        max=a[i];

    }
    printf("%d\n",k);
    return 0;
}
