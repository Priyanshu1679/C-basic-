#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {

    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display
    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}