#include <stdio.h>

int main()
{
    float x,y,z,avg;
    scanf("%f  %f  %f",&x,&y,&z);
    avg= (x+y+z)/3;
    printf("Average: %.2f",avg);
    return 0;
}