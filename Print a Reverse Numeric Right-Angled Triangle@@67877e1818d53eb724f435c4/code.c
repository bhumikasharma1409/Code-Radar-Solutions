#include<stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    
    for(i = n; i >= 1; i--) {  // Loop for rows (reverse order)
        for(j = 1; j <= i; j++) {  // Loop for numbers in each row
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
