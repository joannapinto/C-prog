//9. Write a C++ program to overload unary operator as i) member function

#include <iostream>
using namespace std;

class Number{
    private:
        int value;
    public:
        Number( int v = 0):value(v){}
        Number operator-(){
            return Number(-value);
        }
        void display() {
        cout << "Value:" << value << endl;
    }
};

int main(){
    Number num(10);
    num.display();
    Number numnegated= -num;
    numnegated.display(); 
    return 0;
}
