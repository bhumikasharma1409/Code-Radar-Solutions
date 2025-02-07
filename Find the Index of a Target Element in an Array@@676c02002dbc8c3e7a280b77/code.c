#include <stdio.h>

int main()
{
    int n,i,num,found=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(a[i] == num)
        {
            printf("%d",i);
            found=1;
            break;
        }
    }
    return 0;

}