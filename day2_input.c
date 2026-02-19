#include <stdio.h>

int main()
{
    // Declaring variables
    int age;
    float height;
    char grade;

    // Taking input from user
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in feet): ");
    scanf("%f", &height);

    printf("Enter your grade (A/B/C): ");
    scanf(" %c", &grade);   // space before %c is important

    // Printing output
    printf("\n--- Student Details ---\n");
    printf("Age: %d years\n", age);
    printf("Height: %.2f feet\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
