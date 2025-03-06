#include <stdio.h>

int main() {
    int a = 5, b = 5, c = 5;

    
    (a == b && b == c) ? printf("\nAll are equal.\n") : 
    (((a > b) ? a : b) > c) ? ((a > b) ? printf("%d\n", a) : printf("%d\n", b)) : printf("%d\n", c);

    return 0;
}

