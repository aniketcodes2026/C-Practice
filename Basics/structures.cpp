#include<iostream>
using namespace std;

typedef struct employee
// by using typedef we can write struct employee as ep 
{
    int eID;
    char favChar;
    float salary;
} ep;

int main(){
    ep aniket;
    aniket.eID = 1;
    aniket.favChar = 'c';
    aniket.salary = 10000000;
    cout<<"the value of eID "<<aniket.eID<<endl;
    cout<<"the value of favChar "<<aniket.favChar<<endl;
    cout<<"the value of salary "<<aniket.salary<<endl;

    return 0;
}