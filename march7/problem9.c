

#include <stdio.h>

int main() {
    int arr[10],i:
    int *ptr = arr;

    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", ptr + i);  
    }

    printf("Array elements: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));  
    }
    
    printf("\n");
    return 0;
}

