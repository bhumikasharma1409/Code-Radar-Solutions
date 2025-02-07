#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            if(a[i] > a[i+1])
                {
                    printf("%d",a[i]);
                }
            else
                printf("%d",a[i+1]);
        }
    }
    return 0;

}