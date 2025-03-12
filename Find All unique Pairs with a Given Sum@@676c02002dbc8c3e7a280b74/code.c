#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l;
    scanf("%d",&l);
    for(i=0;i<n;i++)
    {
        if(a[i]+a[i+1]=l)
            printf("%d %d",a[i],a[i+1]);
    }
    return 0;
}