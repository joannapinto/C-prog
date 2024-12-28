//2. Write a C++ program to create an employee class containing following data members: 
//employee name, employee number, basic, DA, IT, net salary and calculate the gross salary 
//of the employee.

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;       // Employee name
    int empNumber;     // Employee number
    double basic;      // Basic salary
    double da;         // Dearness Allowance
    double it;         // Income Tax

public:
    Employee(string n, int num, double b) : name(n), empNumber(num), basic(b) {
        da = 0.2 * basic; // 20% of basic as DA
        it = 0.1 * basic; // 10% of basic as IT
    }

    double calculateGrossSalary() {
        return basic + da; // Gross salary = Basic + DA
    }
    
    double NETGrossSalary() {
        return calculateGrossSalary() - it;
    }

    void displayDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Number: " << empNumber << endl;
        cout << "Basic Salary: $" << basic << endl;
        cout << "Dearness Allowance (DA): $" << da << endl;
        cout << "Income Tax (IT): $" << it << endl;
        cout << "Gross Salary: $" << calculateGrossSalary() << endl;
        cout << "Gross Salary: $" << NETGrossSalary() << endl;
    }
};

int main() {
    Employee emp("Alice Johnson", 101, 5000.00);
    emp.displayDetails();
    return 0;
}
