#include <stdio.h>

int main()
{
    int n,i,even=0 , odd=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
        if (a[i]%2==0)
        {
            even = even +1;
        }
        else
        {
            odd = odd + 1;
        }
    }
    printf("%d %d",even,odd);
    return 0;

}