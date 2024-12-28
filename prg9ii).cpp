//9. Write a C++ program to overload unary operator as ii) friend function.

#include <iostream>
using namespace std;

class Number{
    private:
        int value;
    public:
        Number( int v = 0):value(v){}
        friend Number operator-(Number &n);
        void display() {
            cout << "Value:" << value << endl;
        }
};

Number operator-(Number &n) {   
    return Number(-n.value); 
}

int main(){
    Number num(10);
    num.display();
    Number numnegated= -num;
    numnegated.display(); 
    return 0;
}