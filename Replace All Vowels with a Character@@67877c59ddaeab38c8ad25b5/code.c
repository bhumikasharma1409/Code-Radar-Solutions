#include <stdio.h>

int main() {
    char str[100], ch;
    int i;

    scanf("%s", str);
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            str[i] = ch;
        }
    }

    printf("%s\n", str);
    return 0;
}
