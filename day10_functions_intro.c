#include <stdio.h>

// Function to add two numbers
int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

// Function to check even or odd
void checkEvenOdd(int num)
{
    if(num % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");
}

int main()
{
    int x, y, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Calling add function
    result = add(x, y);
    printf("Sum = %d\n", result);

    // Calling even/odd function
    checkEvenOdd(result);

    return 0;
}