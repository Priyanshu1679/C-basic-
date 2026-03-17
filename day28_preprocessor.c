#include <stdio.h>

#define PI 3.14
#define SQUARE(x) (x * x)

int main() {

    float radius = 5;

    printf("Area of circle = %.2f\n", PI * radius * radius);

    int num = 4;
    printf("Square of %d = %d\n", num, SQUARE(num));

    return 0;
}