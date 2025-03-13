#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    char standard[10];
    float percentage;
};

int main() {
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll_number);

    printf("Enter name: ");
    scanf(" %[^\n]s", s.name);

    printf("Enter standard: ");
    scanf("%s", s.standard);

    printf("Enter percentage: ");
    scanf("%f", &s.percentage);

    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", s.roll_number);
    printf("Name: %s\n", s.name);
    printf("Standard: %s\n", s.standard);
    printf("Percentage: %.2f%%\n", s.percentage);

    return 0;
}

