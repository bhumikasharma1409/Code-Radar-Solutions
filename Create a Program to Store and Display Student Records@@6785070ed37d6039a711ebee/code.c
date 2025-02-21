#include <stdio.h>
#include <stdlib.h> // For malloc()

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student *students = (struct Student*) malloc(n * sizeof(struct Student)); 

    for (int i = 0; i < n; i++) {
        scanf("%d %[^\n] %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.1f\n", 
                students[i].roll_number, students[i].name, students[i].marks);
    }

    free(students); 
    return 0;
}
