#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {

    struct Student students[5];  // Array of structures
    int n, i;

    printf("Enter number of students (max 5): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display all students
    printf("\nStudent Details:\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}