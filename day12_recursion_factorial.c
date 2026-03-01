#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n)
{
    // Base Condition (Stopping condition)
    if(n == 0 || n == 1)
        return 1;

    // Recursive call
    return n * factorial(n - 1);
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("Factorial of %d = %d\n", num, result);

    return 0;
}