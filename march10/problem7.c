/*
Define a union named Vehicle that can store either the number of wheels (int), the
engine capacity (float), or the vehicle type (char[20]). Write a program to demonstrate
how to use this union to store and print all three types of data.
*/

#include <stdio.h>
#include <string.h>  


union Vehicle {
    int wheel_count;
    float engine_capacity;
    char vehicle_type[20];
};

int main() {
    union Vehicle v;  


    v.wheel_count = 4;
    printf("Number of Wheels: %d\n", v.wheel_count);

    // (overwrites wheel_count)
    v.engine_capacity = 1.5;
    printf("Engine Capacity: %.2f liters\n", v.engine_capacity);

    // (overwrites engine_capacity)
    strcpy(v.vehicle_type, "Car");
    printf("Vehicle Type: %s\n", v.vehicle_type);

    return 0;
}

