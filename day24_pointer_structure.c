#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {

    struct Student s1;
    struct Student *ptr;

    ptr = &s1;

    // Input using pointer
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Display using pointer
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}