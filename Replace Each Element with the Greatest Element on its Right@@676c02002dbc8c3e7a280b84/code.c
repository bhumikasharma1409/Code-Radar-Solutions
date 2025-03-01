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

   int maxRight = -1; 
    for (i = n - 1; i >= 0; i--) 
    {
        int temp = arr[i];
        arr[i] = maxRight;
        if (temp > maxRight)
            maxRight = temp;
    }

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}