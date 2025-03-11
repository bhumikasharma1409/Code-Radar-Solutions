#include <stdio.h>

int main() {
    int i, n;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max1 = a[0] > a[1] ? a[0] : a[1];
    int max2 = a[0] < a[1] ? a[0] : a[1];

    for (i = 2; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }
    }

    printf("%d\n", max1 * max2);
    return 0;
}
