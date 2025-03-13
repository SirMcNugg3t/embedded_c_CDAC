#include <stdio.h>

#define SET_BIT(REG, BIT)    ((REG) |= (1 << (BIT)))
#define CLEAR_BIT(REG, BIT)  ((REG) &= ~(1 << (BIT)))
#define TOGGLE_BIT(REG, BIT) ((REG) ^= (1 << (BIT)))
#define CHECK_BIT(REG, BIT)  (((REG) >> (BIT)) & 1)

int main() {
    unsigned char reg = 0x00;
    SET_BIT(reg, 2);
    printf("Register after setting bit 2: 0x%X\n", reg);
    CLEAR_BIT(reg, 2);
    printf("Register after clearing bit 2: 0x%X\n", reg);
    TOGGLE_BIT(reg, 3);
    printf("Register after toggling bit 3: 0x%X\n", reg);
    TOGGLE_BIT(reg, 3);
    printf("Register after toggling bit 3 again: 0x%X\n", reg);
    return 0;
}

