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
    for (i = 0; i < n; i++) 
    {
        int num = a[i], isPrime = 1;  
        if (num < 2) 
            isPrime = 0;  
        for (j = 2; j * j <= num; j++)
            if (num % j == 0) isPrime = 0;  
        if (isPrime) count++;  
    }

    printf("%d\n", count);
    return 0;
}