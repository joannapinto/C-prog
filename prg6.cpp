//6. Write a C++ program to create a function template that can perform various 
//arithmetic operations, such as addition, subtraction, multiplication, and division 
//on two operands. The program should accept different data types (such as int, float, 
//and double) for the operands and demonstrate the use of the function template with at 
//least two different data types.

#include <iostream>
using namespace std;

template<class T>
void calculate(T a, T b) {
    T add, sub, mul, div;
    
    add = a + b;
    cout << "Addition: " << add << endl;
    
    sub = a - b;
    cout << "Subtraction: " << sub << endl;
    
    mul = a * b;
    cout << "Multiplication: " << mul << endl;
    
    if (b != 0) {
        div = a / b;
        cout << "Division: " << div << endl;
    } else {
        cout << "Division: Error! Division by zero." << endl;
    }
}

int main() {
    
    calculate(10, 3);

    calculate(10.5, 3.2);
    
    return 0;
}

