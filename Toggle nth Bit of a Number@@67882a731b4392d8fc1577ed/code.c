#include <stdio.h>

int main() {
    unsigned int x;
    int n;
    scanf("%u %d",&x,&n);

    x = x & ~(1 << n);

    printf("%X",x);

    return 0;
}
