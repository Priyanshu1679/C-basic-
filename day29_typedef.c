#include <stdio.h>

// typedef for int
typedef int myInt;

// typedef for structure
typedef struct {
    int roll;
    char name[50];
    float marks;
} Student;

int main() {

    myInt a = 10;

    Student s1;

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Details:\n");
    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}