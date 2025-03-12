#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum;
    for(i=0;i<n;i++)
    {
        printf(sum=sum+a[i+1]);
    }
    return 0;
}