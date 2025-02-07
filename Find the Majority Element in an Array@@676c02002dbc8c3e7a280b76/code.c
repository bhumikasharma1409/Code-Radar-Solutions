#include <stdio.h>

#include <stdio.h>

int main()
{
    int i,n,j,count=0,major;
    scanf("%d",&n);
    int a[n] , freq[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
        freq[i] = 1;
    }
    for(i=0;i<n;i++)
    {
        if(freq[i] = -1)
            continue;

        for(j=i+1;j<n;j++)
        {
            if( a[i] == a[j])
            {
                freq[i]++;
                freq[j] == -1;
            }
        }
    }

    if(count > n/2)
    {
        major = a[i];
        break;
    }

    if (major != -1)
        printf("%d\n", major);

   return 0;
}