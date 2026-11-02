// this is the program to count the number of digits 
// of a given program using C++ 
#include<iostream>
using namespace std;

int main() {
    int number; 
    cout<<"number: "; 
    cin>>number; 
    // making absolute value 
    if (number < 0) 
        number = number * (-1); 
    // now the logic 
    int digits = 0; 
    while (number > 0) { 
        digits++; 
        number /= 10; 
    } 
    cout<<"number of digits: "<<digits<<endl; 
    return 0;
} 
