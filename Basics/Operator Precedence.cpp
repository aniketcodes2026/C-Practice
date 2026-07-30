#include <iostream>
using namespace std;

int main() {
    // Operator Precedence
    
    int a =3, b=4;
    int c = ((((a*5)+b)-45)+87); //follows bodmas rule to an extent...add and sub from left to right
    
    cout<<c;
    
    return 0;
}