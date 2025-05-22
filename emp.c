#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 2


// Structure to store employee information
struct Employee {
    char name[100];
    int emp_number;
    float salary;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    struct Employee max_salary_employee;
    max_salary_employee.salary = -1;  // Initialize with a negative value to ensure the first salary is considered

    // Input employee details for 100 employees
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        printf("Enter name of employee %d: ", i + 1);
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';  // Remove newline character from name input

        printf("Enter employee number of employee %d: ", i + 1);
        scanf("%d", &employees[i].emp_number);

        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &employees[i].salary);
        getchar();  // To consume the newline character left by scanf

        // Check if the current employee has a higher salary than the maximum recorded salary
        if (employees[i].salary > max_salary_employee.salary) {
            max_salary_employee = employees[i];
        }
    }

    // Display the employee with the maximum salary
    printf("\nEmployee with the maximum salary:\n");
    printf("Name: %s\n", max_salary_employee.name);
    printf("Employee Number: %d\n", max_salary_employee.emp_number);
    printf("Salary: %.2f\n", max_salary_employee.salary);

    return 0;
}
