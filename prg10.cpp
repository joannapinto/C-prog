//10. Write a C++ program to perform the addition and subtraction of two complex 
//  numbers using the binary (+) and (-) operator.

#include <iostream>
using namespace std;

class Complex{
    private:
        float real;
        float imaginary;
    public:
        Complex( float r=0,float i=0): real(r), imaginary(i){}
         
        Complex operator+(Complex &other){
            return Complex(real + other.real ,imaginary + other.imaginary);
        }
        Complex operator-(Complex &other){
            return Complex(real - other.real ,imaginary - other.imaginary);
        }
        void display(){
            cout<<"Complex Number is :"<< real <<" + "<<imaginary<<"i"<<endl;
        }
};

int main(){
    Complex num1(3.5, 2.5);
    Complex num2(1.5, 4.5);
    Complex sum = num1 + num2;
    Complex difference = num1 - num2;

    cout<<"Sum:"<<endl;
    sum.display();
    cout<<"diff:"<<endl;
    difference.display();
    return 0;
}
