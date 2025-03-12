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
    int l;
    scanf("%d",&l);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] + a[j] == l)
                printf("%d %d\n",a[i],a[j]);
        }
    }
    return 0;
}