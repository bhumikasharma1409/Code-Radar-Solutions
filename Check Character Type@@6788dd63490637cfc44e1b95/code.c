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
    else if(x>=32 && x<=47 || x>=58 && x<=64 || x>=91 && x<=96 || x<=123 & x<=126)
        printf("Special Character");
    else
        printf("Digit");
    return 0;
}