#include <stdio.h>

int main()
{
    int i,n,max=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

         if (a[i] % 2 == 0) {
            if (a[i] > max)
            {
                max = a[i];
            }
        }
    }

    if (max != -1)
        printf("%d", max);

    return 0;

}