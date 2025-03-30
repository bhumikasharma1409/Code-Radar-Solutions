#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=i+1;i<n;i++)
        {
            if(a[i]+a[j]==m)
                printf("%d %d\n",a[i],a[j]);
        }
    }
    return 0;
}