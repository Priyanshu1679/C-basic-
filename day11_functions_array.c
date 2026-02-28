#include <stdio.h>

// Function to calculate sum of array
int findSum(int arr[], int size)
{
    int i, sum = 0;

    for(i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int arr[100], n, i, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Function call
    result = findSum(arr, n);

    printf("Sum of array = %d\n", result);

    return 0;
}