#include <stdio.h>

int main() {
    int n, i, j, max = 0, element;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        int ctr = 1;  
        for (j = i + 1; j < n; j++) {
            if (a[j] == a[i])
                ctr++;
        }
        if (ctr > max) {
            max = ctr;
            element = a[i];
        }
    }

    printf("%d\n", element);
    return 0;
}
