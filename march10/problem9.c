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
            printf("Err

