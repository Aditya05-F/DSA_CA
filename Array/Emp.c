#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 50
#define MAX_EMPLOYEES 100

// Structure to store employee information
struct Employee {
    int id;
    char name[MAX_NAME];
    float salary;
    char department[MAX_NAME];
};

// Function declarations
void addEmployee(struct Employee employees[], int *count);
void displayEmployees(struct Employee employees[], int count);
void searchEmployee(struct Employee employees[], int count);
void updateEmployee(struct Employee employees[], int count);
void deleteEmployee(struct Employee employees[], int *count);
void displayMenu();


int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(employees, &count);
                break;
            case 2:
                displayEmployees(employees, count);
                break;
            case 3:
                searchEmployee(employees, count);
                break;
            case 4:
                updateEmployee(employees, count);
                break;
            case 5:
                deleteEmployee(employees, &count);
                break;
            case 6:
                printf("Thank you for using Employee Management System!\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void displayMenu() {
    printf("\n=== Employee Management System ===\n");
    printf("1. Add Employee\n");
    printf("2. Display All Employees\n");
    printf("3. Search Employee\n");
    printf("4. Update Employee\n");
    printf("5. Delete Employee\n");
    printf("6. Exit\n");
}

void addEmployee(struct Employee employees[], int *count) {
    if (*count >= MAX_EMPLOYEES) {
        printf("Maximum number of employees reached!\n");
        return;
    }

    struct Employee newEmp;
    printf("\nEnter Employee Details:\n");
    printf("ID: ");
    scanf("%d", &newEmp.id);
    
    printf("Name: ");
    getchar(); // Clear buffer
    fgets(newEmp.name, MAX_NAME, stdin);
    newEmp.name[strcspn(newEmp.name, "\n")] = 0; // Remove newline
    
    printf("Salary: ");
    scanf("%f", &newEmp.salary);
    
    printf("Department: ");
    getchar(); // Clear buffer
    fgets(newEmp.department, MAX_NAME, stdin);
    newEmp.department[strcspn(newEmp.department, "\n")] = 0; // Remove newline

    employees[*count] = newEmp;
    (*count)++;
    printf("Employee added successfully!\n");
}

void displayEmployees(struct Employee employees[], int count) {
    if (count == 0) {
        printf("No employees found!\n");
        return;
    }

    printf("\n=== Employee List ===\n");
    printf("ID\tName\t\tSalary\tDepartment\n");
    printf("----------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\t%s\n", 
               employees[i].id, 
               employees[i].name, 
               employees[i].salary, 
               employees[i].department);
    }
}

void searchEmployee(struct Employee employees[], int count) {
    int searchId;
    printf("Enter Employee ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < count; i++) {
        if (employees[i].id == searchId) {
            printf("\nEmployee Found!\n");
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("Department: %s\n", employees[i].department);
            return;
        }
    }
    printf("Employee not found!\n");
}

void updateEmployee(struct Employee employees[], int count) {
    int updateId;
    printf("Enter Employee ID to update: ");
    scanf("%d", &updateId);

    for (int i = 0; i < count; i++) {
        if (employees[i].id == updateId) {
            printf("\nEnter new details:\n");
            printf("Name: ");
            getchar(); // Clear buffer
            fgets(employees[i].name, MAX_NAME, stdin);
            employees[i].name[strcspn(employees[i].name, "\n")] = 0;
            
            printf("Salary: ");
            scanf("%f", &employees[i].salary);
            
            printf("Department: ");
            getchar(); // Clear buffer
            fgets(employees[i].department, MAX_NAME, stdin);
            employees[i].department[strcspn(employees[i].department, "\n")] = 0;
            
            printf("Employee updated successfully!\n");
            return;
        }
    }
    printf("Employee not found!\n");
}

void deleteEmployee(struct Employee employees[], int *count) {
    int deleteId;
    printf("Enter Employee ID to delete: ");
    scanf("%d", &deleteId);

    for (int i = 0; i < *count; i++) {
        if (employees[i].id == deleteId) {
            // Shift remaining employees to the left
            for (int j = i; j < *count - 1; j++) {
                employees[j] = employees[j + 1];
            }
            (*count)--;
            printf("Employee deleted successfully!\n");
            return;
        }
    }
    printf("Employee not found!\n");
}
