/*
Write functions to initialize and print details of an Employee and a Manager.
Demonstrate the use of these functions in main.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char position[10];
    int salary;
    int id;
} Employee;

typedef struct {
    Employee manager;
    char region[10];
} Manager;

void initialize_employee(Employee *emp, const char *position, int salary, int id) {
    strncpy(emp->position, position, sizeof(emp->position) - 1);
    emp->position[sizeof(emp->position) - 1] = '\0';
    emp->salary = salary;
    emp->id = id;
}

void print_employee(const Employee *emp) {
    printf("Position: %s\n", emp->position);
    printf("Salary: %d\n", emp->salary);
    printf("ID: %d\n", emp->id);
}

void initialize_manager(Manager *mgr, const char *position, int salary, int id, const char *region) {
    initialize_employee(&mgr->manager, position, salary, id);
    strncpy(mgr->region, region, sizeof(mgr->region) - 1);
    mgr->region[sizeof(mgr->region) - 1] = '\0';
}

void print_manager(const Manager *mgr) {
    print_employee(&mgr->manager);
    printf("Region: %s\n", mgr->region);
}

int main() {
    Employee emp;
    Manager mgr;

    initialize_employee(&emp, "Engineer", 50000, 101);
    initialize_manager(&mgr, "Manager", 75000, 102, "North");

    printf("Employee Details:\n");
    print_employee(&emp);

    printf("\nManager Details:\n");
    print_manager(&mgr);

    return 0;
}





	
