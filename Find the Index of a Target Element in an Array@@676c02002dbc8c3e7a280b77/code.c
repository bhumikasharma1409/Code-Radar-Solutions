#include <stdio.h>

int main()
{
    int n,i,num,found=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
         if(a[i] == num)
        {
            printf("%d",i);
            found=1;
            break;
        }
    }

    if (!found)
    {
        printf("-1\n"); 
    }
    return 0;

}