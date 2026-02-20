#include <stdio.h>

int main()
{
    float num1, num2;
    float sum, diff, product, division;

    // Taking input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Performing operations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    division = num1 / num2;

    // Displaying results
    printf("\n--- Calculation Results ---\n");
    printf("Addition: %.2f\n", sum);
    printf("Subtraction: %.2f\n", diff);
    printf("Multiplication: %.2f\n", product);
    printf("Division: %.2f\n", division);

    return 0;
}