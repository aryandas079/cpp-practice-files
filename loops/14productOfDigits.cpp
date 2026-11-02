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
    int product = 1; 
    while (number > 0) { 
        product *= number % 10; 
        number /= 10; 
    } 
    cout<<"product of the digits: "<<product<<endl; 
    return 0;
} 
