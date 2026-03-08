#include <stdio.h>

int main() {

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;

    ptr = arr;   // array ka base address

    printf("Array elements using pointer:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}