#include<stdio.h>
int main()
{
    int i,n,count=0,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++) {
        int num = a[i], rev = 0, temp = num;
        
        while (temp > 0) {
            rev = rev * 10 + temp % 10; 
            temp /= 10;
        }

        if (num == rev) { 
            count++;
        }
    }

    printf("%d",count);
    return 0;

}