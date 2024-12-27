#include <stdio.h>

struct Employee {
    int id;
    char name[100];
    float salary;
};

void displayEmployee(struct Employee emp) {
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);
}

int main() {
    struct Employee emp;

  
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name); // To read string with spaces
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);


    printf("\nEmployee Details:\n");
    displayEmployee(emp);

    return 0;
}