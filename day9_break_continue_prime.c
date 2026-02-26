#include <stdio.h>

int main()
{
    int i, num;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for(i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                isPrime = 0;
                break;   // loop stops immediately
            }
            else
            {
                continue;   // skip to next iteration
            }
        }
    }

    if(isPrime)
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is NOT a Prime Number.\n", num);

    return 0;
}