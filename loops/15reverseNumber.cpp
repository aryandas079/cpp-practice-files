// this is the program to print the reverse of a number 
// using loops 
#include<iostream> 
#include<cmath>
using namespace std;

int main() {
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    // first making absolute 
    if (number < 0) 
        number *= (-1); 
    // now counting number of digits 
    // backing up the number 
    int numberBack = number; 
    int digits = 0; 
    while (number > 0) { 
        digits++; 
        number /= 10; 
    } 
    // now making the logic for reversing the number 
    int reversedNumber = 0; 
    while (digits > 0) {
        int lastDig = numberBack % 10;
        reversedNumber = reversedNumber * 10 + lastDig; 
        numberBack /= 10; 
        digits--; 
    } 
    cout<<"number reversed: "<<reversedNumber<<endl; 
    return 0;
} 
