#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d  %d  %d",&x,&y,&z);
    if (x>1 && y>1 && z>1)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}