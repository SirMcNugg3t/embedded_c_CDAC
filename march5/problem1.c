#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int max, min;

    // Taking input from the user
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Find the maximum number
    max = num1;  // Assume the first number is the largest
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;
    if (num4 > max) max = num4;

    // Find the minimum number
    min = num1;  // Assume the first number is the smallest
    if (num2 < min) min = num2;
    if (num3 < min) min = num3;
    if (num4 < min) min = num4;

    // Display the results
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}

