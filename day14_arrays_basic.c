#include <stdio.h>

int main() {
    int arr[100], n, i;
    int sum = 0, max, min;
    int search, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Max and Min
    max = arr[0];
    min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    // Linear Search
    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            found = 1;
            break;
        }
    }

    printf("\nSum = %d\n", sum);
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    if(found)
        printf("Element Found!\n");
    else
        printf("Element Not Found!\n");

    return 0;
}