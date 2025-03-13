#include <stdio.h>

typedef double Real;

Real calculate_circle_area(Real radius) {
    const Real PI = 3.141592653589793;
    return PI * radius * radius;
}

int main() {
    Real radius = 5.0;
    Real area = calculate_circle_area(radius);
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);
    return 0;
}

