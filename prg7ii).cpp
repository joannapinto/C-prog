//7. ii)Write a C++ program to demonstrate the exception handling.

#include<iostream>
using namespace std;

int main(){
    int a=1;
    int b=0;
    try{
    if(b==0){
        throw 0;
    }else{
    cout<<a/b<<endl;
    }
    }
    catch(int e){
        cout<<"Error :"<<e<<endl;
    }
    return 0;
}
