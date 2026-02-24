#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // -------- Square Pattern --------
    printf("\nSquare Pattern:\n");
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // -------- Right Triangle --------
    printf("\nRight Triangle Pattern:\n");
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // -------- Number Triangle --------
    printf("\nNumber Triangle Pattern:\n");
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}