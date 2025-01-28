#include <stdio.h>

int main()
{
    char x;
    scanf("%c",&x);
    if(x>='a' && x<='z' || x>='A' && x<='Z')
    {
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I')
            printf("Vowel");
        else
            printf("Consonant");
    }
    else if(x>='0' && x <='9')
        printf("Digit");
    else
        printf("Special Character");
    return 0;
}