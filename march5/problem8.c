#include <stdio.h>

int main() {
    int number, i,j;

    
    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &number);

    
    printf("Multiplication Table for %d:\n", number);
    for (j = 1; j <= number; j++){
    	for (i = 1; i <= 10; i++) {
        	printf("%d x %d = %d\t", number, i, number * i);
    		}
    	}
    printf("\n");

    return 0;
}


