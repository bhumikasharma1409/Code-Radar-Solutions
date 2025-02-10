#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int ctr = 0, i = 0;

    scanf(" %[^\n]", str);
    int len = strlen(str);
    
    while (i < len) {
        while (i < len && str[i] == ' ')
            i++;

        if (i < len && str[i] != ' ') {
            ctr++;
            while (i < len && str[i] != ' ')
                i++;
        }
    }

    printf("%d\n", ctr);
    return 0;
}
