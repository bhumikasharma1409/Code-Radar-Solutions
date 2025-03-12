#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, i, j;
    scanf("%d", &n);
    int a[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int l;
    scanf("%d", &l);

    // Sort the array to ensure pairs are printed in order
    sort(a, n);

    for (i = 0; i < n; i++) {
        if (i > 0 && a[i] == a[i - 1]) {
            continue; // Skip duplicate numbers
        }
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == l) {
                printf("%d %d\n", a[i], a[j]);
                break; // Move to next unique number
            }
        }
    }
    
    return 0;
}
