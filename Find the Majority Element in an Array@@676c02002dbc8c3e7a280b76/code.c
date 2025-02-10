#include <stdio.h>

int main() {
    int i, n, j, count, major = -1;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int a[n], freq[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[i] = 1;
    }

    for (i = 0; i < n; i++) {
        if (freq[i] == -1)  
            continue;

        count = 1; 

        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                freq[j] = -1; 
            }
        }

        if (count > n / 2) {
            major = a[i];
            break; 
        }
    }

    if (major != -1)
        printf("Majority Element: %d\n", major);
    else
        printf("No Majority Element Found\n");

    return 0;
}
