#include <stdio.h>

void swap(int *a, int *b);

int main() {

    int x = 10;
    int y = 20;

    printf("Before Swap:\n");
    printf("x = %d y = %d\n", x, y);

    swap(&x, &y);

    printf("After Swap:\n");
    printf("x = %d y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b) {

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}