#include <stdio.h>

int main()
{
    char a[100];
    int ctr=0,l;
    scanf("%s",&a);
    for(l = 0;a[l] != '\0'; l++)
    {
        if (a[l] == 'a' || a[l] == 'e' || a[l] == 'i' || a[l] == 'o' || a[l] == 'u' ||
         a[l] == 'A' || a[l] == 'E' || a[l] == 'I' || a[l] == 'O' || a[l] == 'U')
         {
            a[l] = "#";
         }
    }
    printf("%s",a);
return 0;
}