#include <stdio.h>

int main() {
    // Declare variables for the three angles
    int angle1, angle2, angle3;

    // Ask user for the three angles
    printf("Enter the three angles of the triangle: \n");
    printf("Angle 1: ");
    scanf("%d", &angle1);
    printf("Angle 2: ");
    scanf("%d", &angle2);
    printf("Angle 3: ");
    scanf("%d", &angle3);

    // Check if the angles are valid (must add up to 180)
    if (angle1 + angle2 + angle3 != 180) {
        printf("The angles do not form a valid triangle.\n");
        return 0;
    }

    // Check if the triangle is Equilateral (all angles are 60 degrees)
    if (angle1 == 60 && angle2 == 60 && angle3 == 60) {
        printf("The triangle is an Equilateral triangle.\n");
    }
    // Check if the triangle is Isosceles (two angles are equal)
    else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
        printf("The triangle is an Isosceles triangle.\n");
    }
    // Otherwise, the triangle is Scalene (all angles are different)
    else {
        printf("The triangle is a Scalene triangle.\n");
    }

    // Check for the type of triangle based on angles (Right, Acute, or Obtuse)
    if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        printf("The triangle is also a Right triangle.\n");
    }
    else if (angle1 > 90 || angle2 > 90 || angle3 > 90) {
        printf("The triangle is also an Obtuse triangle.\n");
    }
    else {
        printf("The triangle is also an Acute triangle.\n");
    }

    return 0;
}

