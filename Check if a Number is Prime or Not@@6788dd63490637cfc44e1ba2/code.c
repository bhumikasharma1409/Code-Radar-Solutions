#include <stdio.h>

int main()
{
    int x,i,ctr=0;
    scanf("%d",&x);
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            ctr++;
            break;
        }
    }
    if(ctr==0)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}