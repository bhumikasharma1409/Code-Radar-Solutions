#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxRight = -1; 
    for (i = n - 1; i >= 0; i--) {
        int temp = arr[i];
        arr[i] = maxRight;
        if (temp > maxRight)
            maxRight = temp;
    }

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
