#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

class Employee {
private:
    int id;
    string name;
    double salary;
    string department;

public:
    Employee(int _id, string _name, double _salary, string _department)
        : id(_id), name(_name), salary(_salary), department(_department) {}

    // Getters
    int getId() const { return id; }
    string getName() const { return name; }
    double getSalary() const { return salary; }
    string getDepartment() const { return department; }

    // Setters
    void setName(string _name) { name = _name; }
    void setSalary(double _salary) { salary = _salary; }
    void setDepartment(string _department) { department = _department; }

    // Display employee details
    void display() const {
        cout << setw(5) << id << "\t"
             << setw(20) << left << name << "\t"
             << setw(10) << fixed << setprecision(2) << salary << "\t"
             << setw(15) << left << department << endl;
    }
};

class EmployeeManagementSystem {
private:
    vector<Employee> employees;

    // Helper function to clear input buffer
    void clearInputBuffer() {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Helper function to get valid integer input
    int getValidIntInput(const string& prompt) {
        int value;
        while (true) {
            cout << prompt;
            if (cin >> value) {
                clearInputBuffer();
                return value;
            }
            cout << "Invalid input. Please enter a number.\n";
            clearInputBuffer();
        }
    }

    // Helper function to get valid double input
    double getValidDoubleInput(const string& prompt) {
        double value;
        while (true) {
            cout << prompt;
            if (cin >> value) {
                clearInputBuffer();
                return value;
            }
            cout << "Invalid input. Please enter a number.\n";
            clearInputBuffer();
        }
    }

public:
    void addEmployee() {
        int id = getValidIntInput("Enter Employee ID: ");
        
        // Check if ID already exists
        for (const auto& emp : employees) {
            if (emp.getId() == id) {
                cout << "Error: Employee ID already exists!\n";
                return;
            }
        }

        string name, department;
        cout << "Enter Name: ";
        getline(cin, name);
        
        double salary = getValidDoubleInput("Enter Salary: ");
        
        cout << "Enter Department: ";
        getline(cin, department);

        employees.emplace_back(id, name, salary, department);
        cout << "Employee added successfully!\n";
    }

    void displayEmployees() const {
        if (employees.empty()) {
            cout << "No employees found!\n";
            return;
        }

        cout << "\n=== Employee List ===\n";
        cout << setw(5) << "ID" << "\t"
             << setw(20) << left << "Name" << "\t"
             << setw(10) << "Salary" << "\t"
             << setw(15) << left << "Department" << endl;
        cout << string(60, '-') << endl;

        for (const auto& emp : employees) {
            emp.display();
        }
    }

    void searchEmployee() const {
        int searchId = getValidIntInput("Enter Employee ID to search: ");

        for (const auto& emp : employees) {
            if (emp.getId() == searchId) {
                cout << "\nEmployee Found!\n";
                cout << "ID: " << emp.getId() << endl;
                cout << "Name: " << emp.getName() << endl;
                cout << "Salary: " << fixed << setprecision(2) << emp.getSalary() << endl;
                cout << "Department: " << emp.getDepartment() << endl;
                return;
            }
        }
        cout << "Employee not found!\n";
    }

    void updateEmployee() {
        int updateId = getValidIntInput("Enter Employee ID to update: ");

        for (auto& emp : employees) {
            if (emp.getId() == updateId) {
                string name, department;
                cout << "\nEnter new details:\n";
                cout << "Name: ";
                getline(cin, name);
                
                double salary = getValidDoubleInput("Salary: ");
                
                cout << "Department: ";
                getline(cin, department);

                emp.setName(name);
                emp.setSalary(salary);
                emp.setDepartment(department);
                
                cout << "Employee updated successfully!\n";
                return;
            }
        }
        cout << "Employee not found!\n";
    }

    void deleteEmployee() {
        int deleteId = getValidIntInput("Enter Employee ID to delete: ");

        for (auto it = employees.begin(); it != employees.end(); ++it) {
            if (it->getId() == deleteId) {
                employees.erase(it);
                cout << "Employee deleted successfully!\n";
                return;
            }
        }
        cout << "Employee not found!\n";
    }

    void displayMenu() const {
        cout << "\n=== Employee Management System ===\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
    }
};

int main() {
    EmployeeManagementSystem ems;
    int choice;

    while (true) {
        ems.displayMenu();
        choice = ems.getValidIntInput("Enter your choice: ");

        switch (choice) {
            case 1:
                ems.addEmployee();
                break;
            case 2:
                ems.displayEmployees();
                break;
            case 3:
                ems.searchEmployee();
                break;
            case 4:
                ems.updateEmployee();
                break;
            case 5:
                ems.deleteEmployee();
                break;
            case 6:
                cout << "Thank you for using Employee Management System!\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
} 