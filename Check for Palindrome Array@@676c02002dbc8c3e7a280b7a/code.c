#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int l = sizeof(a) / sizeof(a[0]);
    int is_palindrome = 1;
    int a[n];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n / 2; i++) 
    {
        if (arr[i] != arr[n - i - 1])
        {
            is_palindrome = 0; 
            break;
        }
    }

    if (is_palindrome)
        printf("Yes");
    else
        printf("NO");

    return 0;


}