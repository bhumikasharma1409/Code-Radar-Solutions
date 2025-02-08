#include <stdio.h>

int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    float med;
    if(n%2==0)
    {
        med = (a[n/2 - 1] + a[n/2])  / 2.0;
    }
    else
    {
        med = a[n/2];
    }
    printf("%d",med);
    return 0;

}