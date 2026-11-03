// this program contains all the basic arithmetic operations 
#include <iostream> 
using namespace std; 
int main () { 
    int a, b; 
    float c, d; 
    a = 10; 
    b = 3; 
    c = 10.0; 
    d = 3.0; 
    // now performing the arithmetic operations 
    // addition 
    int sum = a + b; 
    // subtraction  
    int diff = a - b; 
    // multiplication 
    int product = a * b; 
    // division 
    int division = a / b; 
    // now for real numbers... we need to take     floating point numbers as values to get real values from division 
    // so there are mainly two options 
    float realDiv1 = (float) a / b; 
    float realDiv2 = c / d;  
    cout<<"summation value is: "<<sum<<endl; 
    cout<<"difference value is: "<<diff<<endl; 
    cout<<"multiplication value is: "<<product<<endl; 
    cout<<"division value is: "<<division<<endl; 
    cout<<"real_division value by method one is: "<<realDiv1<<endl; 
    cout<<"real_division value by method two is: "<<realDiv2<<endl; 
}