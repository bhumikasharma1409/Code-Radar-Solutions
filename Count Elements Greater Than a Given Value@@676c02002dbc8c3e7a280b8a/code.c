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
    int b,ctr=0;
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(b<a[i])
            ctr++;
    }
    printf("%d\n",ctr);
    
    return 0;
}