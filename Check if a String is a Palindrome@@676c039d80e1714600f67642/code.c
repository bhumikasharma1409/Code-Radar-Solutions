#include <stdio.h>

int main()
{
    char str[30];
    int i,j,l;
    scanf("%s",&str);
    for(l=0 ; str[l] != '\0'; l++);
    j=l-1;
    for(i=0;i<l/2 ; i++)
    {
        if (a[i] != a[j])
        {
            printf("No");
            return 0;
        }
        j--;
    }
    printf("Yes");
    return 0;

}