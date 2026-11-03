// this is the program used to find the remainder of any input number 
// a%b = a (a<b) 
// a%a = 0 
// a%(-b) = a%b 
// -a%b = -(a%b) 
#include<iostream> 
using namespace std; 
int main() { 
    int number1, number2; 
    cout<<"enter first number: "; cin>>number1; 
    cout<<"enter second number: "; cin>>number2; 
    // now finding the remainder 
    cout<<"remainder: "<<number1 % number2<<endl;  
} 
