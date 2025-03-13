#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person me;
    strcpy(me.name, "Your Name");
    me.age = 25;

    printf("Name: %s\n", me.name);
    printf("Age: %d\n", me.age);

    return 0;
}

