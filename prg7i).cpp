//7. i.) Write a C++ progam to demonstrate the use of friend function.

#include <iostream>
using namespace std;

class Box{
private:
    int length;
public:
    Box() : length(0) { }
    friend int printLength(Box); 
};

int printLength(Box b)
{
    b.length = 10;
    return b.length;
}

int main()
{
    Box b;
    cout << "Length of box: " << printLength(b);
    return 0;
}

