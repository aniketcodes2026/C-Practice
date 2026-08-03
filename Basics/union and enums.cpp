#include<iostream>
using namespace std;

union money
{
    int rice;
    char car;
    float pounds;
    
};

int main(){
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.rice; 
    // returns garbage value as we can only use one at a time as memory is shared among all three
    return 0;
}    


#include<iostream>
using namespace std;

int main(){
    enum Meal{breakfast, lunch, dinner};
    // enum use as data type assign nos
    Meal m1 = lunch;
    cout<<(m1==1);
    return 0;
}