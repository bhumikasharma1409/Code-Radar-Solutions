#include <stdio.h>

#include <stdio.h>

int main() {
    int num, msb;
    int bits = sizeof(int) * 8;  

    scanf("%d", &num);

    msb = (num >> (bits - 1)) & 1;

    if (msb)
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}
