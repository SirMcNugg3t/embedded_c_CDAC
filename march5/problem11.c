#include <stdio.h>
//Menu driven calculator

int main() 
{

    while (1) {
        
        printf("Menu:\n");
        printf("0 - Exit\n");
        printf("1 - Add\n");
        printf("2 - Subtract\n");
        printf("3 - Multiply\n");
        printf("4 - Divide\n");
        printf("Enter your choice: ");
        
        int choice;
    	float num1, num2, result;
        scanf("%d", &choice);

        
        if (choice == 0) {
            printf("Exiting the program.\n");
            break;
        }

        
        printf("Enter first numbers: ");
        scanf("%f", &num1);
        printf("Enter second numbers: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case 2:
                
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case 3:
                
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 4:
                
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}

