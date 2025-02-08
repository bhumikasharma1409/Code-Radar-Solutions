#include <stdio.h>

int main()
{
    int i,j,n,max=0,element;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                count++
            }
        }
    }
    if(count > max)
    {
        max = count;
        element = a[i];
    }
    printf("%d",element);
    return 0;
}