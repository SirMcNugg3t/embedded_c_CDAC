/*
Write a C program that defines an enum Operation with values ADD, SUBTRACT,
MULTIPLY, and DIVIDE. Write a function performOperation that takes two integers
and an Operation enum value, performs the corresponding operation, and returns the
result. Demonstrate this function in your main function. Get 2 numbers from user.
*/

#include <stdio.h>

enum operation { ADD, SUBTRACT, MULTIPLY, DIVIDE };

float perform_operation(enum operation op, int a, int b) {
    switch (op) {
        case ADD:
            return a + b;
        case SUBTRACT:
            return a - b;
        case MULTIPLY:
            return a * b;
        case DIVIDE:
            if (b == 0) {
                printf("Error: Division by zero.\n");
                return 0;
            }
            return (float)a / b; 
        default:
            printf("Error: Invalid operation.\n");
            return 0;
    }
}

int main() {
    int a, b, op_input;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Select operation (0 for ADD, 1 for SUBTRACT, 2 for MULTIPLY, 3 for DIVIDE): ");
    scanf("%d", &op_input);

    if (op_input < 0 || op_input > 3) {
        printf("Error: Invalid operation selection.\n");
        return 1;
    }

    enum operation op = (enum operation)op_input;
    float result = perform_operation(op, a, b);
    printf("Result: %.2f\n", result);
    return 0;
}

	
	
	
	
		
		
