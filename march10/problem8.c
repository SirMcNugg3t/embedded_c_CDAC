#include <stdio.h>

enum ShapeType {
    CIRCLE,
    RECTANGLE,
    SQUARE,
    TRIANGLE
};


void printShapeDescription(enum ShapeType shape) {
    switch (shape) {
        case CIRCLE:
            printf("CIRCLE: A round shape\n");
            break;
        case RECTANGLE:
            printf("RECTANGLE: A shape with four right angles\n");
            break;
        case SQUARE:
            printf("SQUARE: A rectangle with equal sides\n");
            break;
        case TRIANGLE:
            printf("TRIANGLE: A shape with three sides\n");
            break;
        default:
            printf("Unknown Shape\n");
    }
}

int main() {

    printShapeDescription(CIRCLE);
    printShapeDescription(RECTANGLE);
    printShapeDescription(SQUARE);
    printShapeDescription(TRIANGLE);

    return 0;
}

