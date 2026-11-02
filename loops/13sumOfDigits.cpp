// this is the program to find and print the sum of digits 
// using loops 
#include<iostream>
using namespace std;

int main() {
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    // making absolute value 
    if (number < 0) 
        number = number * (-1); 
    // now the logic 
    int sum = 0; 
    while (number > 0) { 
        sum += number % 10; 
        number /= 10; 
    } 
    cout<<"sum of the digits: "<<sum<<endl; 
    return 0;
} 
