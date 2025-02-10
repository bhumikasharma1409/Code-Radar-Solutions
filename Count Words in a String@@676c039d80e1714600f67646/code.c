#include <stdio.h>

int main()
{
    char str[100];
    int ctr=1,i;
    scanf("%[^\n]",&str);
    for(i = 0;str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\0')
        {
            ctr++;
        }
    }
    printf("%d\n", ctr);
    return 0;
}