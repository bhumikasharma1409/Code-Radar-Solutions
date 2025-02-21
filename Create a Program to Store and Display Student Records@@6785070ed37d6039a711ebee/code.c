#include<stdio.h>

struct students
{
    int rollno;
    char name[50];
    float marks;
}

int main()
{
    int n,i;
    scanf("%d",&n);

    struct students[n];
    for(i=0;i<=n;i++)
    {
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.1f\n", 
                students[i].rollno, students[i].name, students[i].marks);
    }

}