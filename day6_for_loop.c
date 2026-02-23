#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    // ---- Print numbers from 1 to N ----
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nNumbers from 1 to %d are:\n", n);
    for(i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum += i;
    }

    // ---- Sum of first N numbers ----
    printf("\n\nSum of first %d numbers = %d\n", n, sum);

    // ---- Multiplication Table ----
    printf("\nMultiplication Table of %d:\n", n);
    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}