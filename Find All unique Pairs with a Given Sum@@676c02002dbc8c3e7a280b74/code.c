#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int a[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int l;
    scanf("%d", &l);
    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == l) {
                // Ensure only unique pairs are printed once
                int isDuplicate = 0;
                for (int k = 0; k < i; k++) {
                    if ((a[k] == a[i] && a[j] == a[k + 1]) || (a[k] == a[j] && a[i] == a[k + 1])) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    printf("%d %d\n", a[i], a[j]);
                }
            }
        }
    }
    
    return 0;
}
