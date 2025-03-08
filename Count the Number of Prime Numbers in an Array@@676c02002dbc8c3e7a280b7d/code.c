#include <stdio.h>

int main() {
    int n, i, j, ctr = 0;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        int Prime = 1;  
        if (a[i] < 2) 
            Prime = 0;
        else if (a[i] > 2 && a[i] % 2 == 0) 
            Prime = 0;
        else {
            for (j = 3; j <= a[i] / 2; j += 2) {
                if (a[i] % j == 0) {
                    Prime = 0;
                    break;
                }
            }
        }

        if (Prime) 
            ctr++;
    }

    printf("%d\n", ctr);
    return 0;
}
