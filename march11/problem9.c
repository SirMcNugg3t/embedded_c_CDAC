#include <stdio.h>

#define SET_MASK(REG, MASK)    ((REG) |= (MASK))
#define CLEAR_MASK(REG, MASK)  ((REG) &= ~(MASK))
#define TOGGLE_MASK(REG, MASK) ((REG) ^= (MASK))
#define CHECK_MASK(REG, MASK)  ((REG) & (MASK))

int main() {
    unsigned char reg = 0x00;
    unsigned char mask = 0x0F;
    
    SET_MASK(reg, mask);
    printf("Register after setting mask 0x0F: 0x%X\n", reg);
    
    CLEAR_MASK(reg, mask);
    printf("Register after clearing mask 0x0F: 0x%X\n", reg);
    
    TOGGLE_MASK(reg, mask);
    printf("Register after toggling mask 0x0F: 0x%X\n", reg);
    
    TOGGLE_MASK(reg, mask);
    printf("Register after toggling mask 0x0F again: 0x%X\n", reg);
    
    return 0;
}

