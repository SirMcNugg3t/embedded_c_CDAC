#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (m): ");
    scanf("%f", &height);

    if (height <= 0 || weight <= 0) {
        printf("Invalid input. Height and weight must be positive values.\n");
        return 1;
    }

    bmi = weight / (height * height);

    printf("Your BMI: %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Category: Underweight\n");
    else if (bmi < 24.9)
        printf("Category: Normal weight\n");
    else if (bmi < 29.9)
        printf("Category: Overweight\n");
    else
        printf("Category: Obese\n");

    return 0;
}

