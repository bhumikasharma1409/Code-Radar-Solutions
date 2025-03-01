#include<stdio.h>

int main()
{
    int n,i,j,ctr=0,max = 0,element;
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
            if(a[j]==a[i])
                ctr++;
            {
                if(ctr > max)
                    max = ctr;
                    element = a[i];
            }
        }
    }
    printf("%d",element);
    return 0;
}