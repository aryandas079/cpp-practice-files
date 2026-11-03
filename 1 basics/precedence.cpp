// this program shows the system of precedence of basic arithmetic operators in C++ 
#include<iostream> 
using namespace std; 
int main() { 
    // in programming precedence of arithmetic operators is calculated 
    // by performing left to right and top to bottom and following BODMAS 
    int number1 = 2 * 5/6; //answer can be both 1 and 0, but 1 is accepted 
    cout<<"value after calculation: "<<number1<<endl; 
} 
