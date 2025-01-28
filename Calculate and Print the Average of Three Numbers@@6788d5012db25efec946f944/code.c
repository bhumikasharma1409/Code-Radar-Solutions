#include <stdio.h>

int main()
{
    int x,y,z;
    float avg;
    scanf("%d  %d  %d",&x,&y,&z);
    avg= (x+y+z)/3;
    printf("Average: %.2f",avg);
    return 0;
}