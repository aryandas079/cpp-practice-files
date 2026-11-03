// this is the program used to print the sum of two numbers 
// using functions 
#include<iostream>
using namespace std;
int summation(int a, int b); 
int main() {
    int number1, number2; 
    cout<<"enter 1st number: "; 
    cin>>number1; 
    cout<<"enter 2nd number: "; 
    cin>>number2; 
    int sum = summation(number1, number2); 
    cout<<"the required summation is: "<<sum<<endl; 
    return 0;
} 
summation (int a, int b) { 
    return a + b; 
} 
