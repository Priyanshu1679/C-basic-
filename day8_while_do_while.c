#include <stdio.h>

int main()
{
    int i = 1, n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // -------- While Loop --------
    printf("\nUsing WHILE loop:\n");
    while(i <= n)
    {
        printf("%d ", i);
        sum += i;
        i++;
    }

    printf("\nSum = %d\n", sum);

    // -------- Do-While Loop --------
    int j = 1;

    printf("\nUsing DO-WHILE loop:\n");
    do
    {
        printf("%d ", j);
        j++;
    } while(j <= 5);

    return 0;
}