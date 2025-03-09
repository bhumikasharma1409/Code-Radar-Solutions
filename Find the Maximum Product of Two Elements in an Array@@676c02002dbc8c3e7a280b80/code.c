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
    int max1 = 0, max2 = 0;
    for(i=0;i<n;i++)
    {
       if(a[i]>max1)
       {
        max2 = max1;
        max1 = a[i];
       }
       else if (a[i] > max2) 
       {
        max2 = a[i]; 
        }

    }
    printf("%d\n", max1 * max2); 
    return 0;

}