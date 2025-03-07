#include<stdio.h>

int get_num(void) {
    int num;
    printf("Number: ");
    scanf("%d", &num);  // Read the integer number
    return num;
}

char get_char(void) {
    char character;
    
    // To consume any leftover newline character in the input buffer
    getchar();  // This reads and discards the newline character

    printf("Letter: ");
    scanf("%c", &character);  // Read the character input
    return character;
}

int main() {
    int num = get_num();    // Get number from user
    char a = get_char();    // Get character from user
    int i = 0;
    
    printf("Number: %d\n", num);    // Print number
    printf("Letter: %c\n", a);      // Print character
    
    while (i < num) {
        printf("%c", a);    // Print the character 'num' times
        i++;
    }
	printf("\0");
    return 0;
}

