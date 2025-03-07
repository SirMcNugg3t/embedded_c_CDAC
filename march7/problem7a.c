#include <stdio.h>

struct array_elements {
    int array_size;
    char array[100];  // Array to store the string
};

struct array_elements input_array() {
    struct array_elements username;
    printf("Enter Username: ");
    scanf("%99s", username.array);  // Read string, limit input to 99 characters
    
    // Manually calculate the array size (string length + 1 for null terminator)
    int i = 0;
    while (username.array[i] != '\0') {
        i++;
    }
    username.array_size = i;  // Set the array size to the length of the string

    return username;
}

int main() {
    // Get the user input by calling the input_array() function
    struct array_elements user = input_array();

    // Print the username and its size
    printf("String: %s\n", user.array);
    printf("Size: %d\n", user.array_size);

    return 0;
}


