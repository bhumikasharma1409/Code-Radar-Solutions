#include <stdio.h>

int main() {
    int n, b, i, ctr = 0;
    
    scanf("%d %d", &n, &b);  // Read both n and b
    
    int a[n];  
    for (i = 0; i < n; i++)  
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)  
        if (a[i] > b)  
            ctr++;

    printf("%d\n", ctr); 
    return 0;
}
