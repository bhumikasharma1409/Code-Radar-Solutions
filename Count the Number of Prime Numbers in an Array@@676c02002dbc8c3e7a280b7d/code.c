#include <stdio.h>

int main() {
    int n, i, j, count = 0;  
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        int num = a[i], isPrime = 1;  

        if (num < 2) 
            isPrime = 0;
        else if (num > 2 && num % 2 == 0) 
            isPrime = 0;
        else {
            for (j = 3; j <= num / 2; j += 2) {
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) 
            count++;
    }

    printf("%d\n", count);
    return 0;
}
