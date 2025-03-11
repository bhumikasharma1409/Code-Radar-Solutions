#include <stdio.h>

int main() {
    int i, n;
    scanf("%d", &n);
    
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max1 = -1000000, max2 = -1000000;
    int min1 = 1000000, min2 = 1000000;

    for (i = 0; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2) {
            max2 = a[i];
        }

        if (a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        } else if (a[i] < min2) {
            min2 = a[i];
        }
    }

    int maxProduct = (max1 * max2 > min1 * min2) ? max1 * max2 : min1 * min2;
    printf("%d\n", maxProduct);
    
    return 0;
}
