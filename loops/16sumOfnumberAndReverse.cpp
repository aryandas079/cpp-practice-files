// this is the program to print the sum of the 
// number and it's reverse 
#include<iostream> 
using namespace std;

int main() {
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    // taking absolute value 
    if (number < 0) 
        number *= (-1); 
    // now counting number of digits 
    // making a backup for the number 
    int originalNumBack = number, numberBack = number; 
    int digits = 0; 
    while (number > 0) { 
        digits++; 
        number /= 10; 
    } 
    // now reversing the number 
    int reversedNumber = 0; 
    while (digits > 0) {
        int lastDig = numberBack % 10;
        reversedNumber = reversedNumber * 10 + lastDig; 
        numberBack /= 10; 
        digits--; 
    }
    // now the sum of the original number and the reversed number 
    cout<<"original number: "<<originalNumBack<<endl; 
    cout<<"reversed number: "<<reversedNumber<<endl;
    cout<<"required sum: "<<originalNumBack + reversedNumber<<endl; 
    return 0;
} 
