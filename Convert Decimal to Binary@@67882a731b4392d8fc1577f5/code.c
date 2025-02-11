#include <stdio.h>

void decimalToBinaryBitwise(int num) {
    int i;
    int flag = 0;

    for (i = 31; i >= 0; i--) {
        if (num & (1 << i)) {
            flag = 1; 
        }
        if (flag) {
            printf("%d", (num & (1 << i)) ? 1 : 0);
        }
    }
    if (!flag) printf("0"); // If number is 0
}

int main() {
    int num;
    scanf("%d", &num);
    decimalToBinaryBitwise(num);
    return 0;
}
