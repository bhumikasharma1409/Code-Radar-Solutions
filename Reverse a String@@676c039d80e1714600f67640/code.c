#include <stdio.h>

int main()
{
    char a[],temp;
    int i,j,l;
    scanf("%s",&a)

    for(l=0;a[l]!='\0';l++)
    j=l-1;
    for(i=0;i<l/2;i++)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
    printf("%s",a);
    return 0;

}