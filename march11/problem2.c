#include <stdio.h>

typedef enum {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    BLACK,
    WHITE
} Color;

const char* get_color_name(Color color) {
    switch (color) {
        case RED:    return "Red";
        case GREEN:  return "Green";
        case BLUE:   return "Blue";
        case YELLOW: return "Yellow";
        case BLACK:  return "Black";
        case WHITE:  return "White";
        default:     return "Unknown Color";
    }
}

int main() {
    Color favoriteColor = BLUE;
    printf("Your favorite color is %s.\n", get_color_name(favoriteColor));
    return 0;
}

