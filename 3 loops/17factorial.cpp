// this program is used to find the factorial of a number 
// using loops 
#include<iostream>
using namespace std;

int main() {
    int number; 
    cout<<"enter number to find factorial: "; 
    cin>>number; 
    // now checking the edge cases 
    if (number < 0) { 
        cout<<"factorial is not defined for negative numbers"<<endl; 
        return 1; 
    }
    // now using loop to find out the factorial 
    int factorial = 1; 
    for(int i = number; i > 0; i--) { 
        factorial *= i; 
    } 
    cout<<number<<"! = "<<factorial<<endl; 
    return 0;
} 
