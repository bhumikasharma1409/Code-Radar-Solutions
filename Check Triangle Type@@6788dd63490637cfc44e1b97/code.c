#include <stdio.h>

int main()
{
    int x,y,z;
    scanf("%d  %d  %d",&x,&y,&z);
    if(x==y && y==z && x==z)
        printf("Equilateral");
    else if(a==b || b==c || c==a)
        printf("Isosceles");
    else 
        printf("Scalene");
    return 0;
}