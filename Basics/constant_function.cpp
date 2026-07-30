#include <iostream>
using namespace std;

int main() {
    int a = 34; 
    cout<<"The value of a was: "<<a<<endl;
    a = 45; // You will not get any error because here 'a' is not constant
    cout<<"The value of a is: "<<a;
    
    //Constants in C++
    
    const int a = 3; // We made 'a' constant here
    cout<<"The value of a was: "<<a<<endl;
    a = 45; // You will get an error because 'a' is a constant
    cout<<"The value of a is: "<<a<<endl;
    
    return 0;
}