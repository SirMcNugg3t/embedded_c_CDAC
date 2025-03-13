#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    char ch;

    printf("Enter a string: ");
    
    while ((ch = getchar()) != '\n' && i < 99) {  
        str[i++] = ch;
    }
    str[i] = '\0';  

    printf("You entered: %s\n", str);
    return 0;
}

