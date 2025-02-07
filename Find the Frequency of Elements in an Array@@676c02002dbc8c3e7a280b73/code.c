#include <stdio.h>

int main()
{
    int i,n,j;
    scanf("%d",&n);
    int a[n] , freq[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
        freq[i] = 1;
    }
    for(i=0;i<n;i++)
    {
        if(freq[i] == -1)
            continue;

        for(j=i+1;j<n;j++)
        {
            if( a[i] == a[j])
            {
                freq[i]++;
                freq[j] = -1;
            }
        }
    }

    for (i = 0; i < n; i++) {
        if (freq[i] != -1) {
            printf("%d %d\n", a[i], freq[i]);
        }
    }

    return 0;


}