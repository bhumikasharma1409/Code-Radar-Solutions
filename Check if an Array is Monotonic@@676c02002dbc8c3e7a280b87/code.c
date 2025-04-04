#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int increasing = 1, decreasing = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) 
            decreasing = 0;  
        if (a[i] < a[i - 1]) 
            increasing = 0;  
    }
    if (increasing || decreasing)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
