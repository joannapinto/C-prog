//5. Write a C++ program to create a class template to find the maximum of two numbers. 
//The class template should work with different data types such as int and float. 
//The program should include a member function that compares the two numbers and returns the maximum.

#include <iostream>
using namespace std;
 
template <typename T> 
class MaxFinder {
public:
    T max(T a, T b) {
        return (a > b) ? a : b;
    }
};

int main() {
    MaxFinder<int> intFinder;          // For integers
    MaxFinder<float> floatFinder;      // For floats

    int a = 5.2, b = 5.3;
    float x = 5.5f, y = 5.3f;

    cout << "Maximum of " << a << " and " << b << " is " << intFinder.max(a, b) << endl;
    cout << "Maximum of " << x << " and " << y << " is " << floatFinder.max(x, y) << endl;

    return 0;
}



