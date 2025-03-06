#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the sum of first n numbers using a loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Print the result
    printf("Sum of first %d numbers is: %d\n", n, sum);

    return 0;
}

