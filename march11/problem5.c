#include <stdio.h>

int main() {
    unsigned int num;
    printf("Enter an integer: ");
    scanf("%u", &num);

    if ((num & (1 << 2)) && (num & (1 << 3))) {
        printf("Both bit 2 and bit 3 are set.\n");
    } else {
        printf("Both bit 2 and bit 3 are not set.\n");
    }

    return 0;
}

