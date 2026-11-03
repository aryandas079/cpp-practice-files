// this is the program used to swap numbers 
// using pass by reference  
#include<iostream>
using namespace std;
void swap(int& x, int& y); 
int main() {
    int number1, number2; 
    cout<<"enter 1st number: "; 
    cin>>number1; 
    cout<<"enter 2nd number: "; 
    cin>>number2; 
    cout<<"original numbers: "<<number1<<" "<<number2<<endl; 
    swap(number1, number2); 
    cout<<"swapped numbers: "<<number1<<" "<<number2<<endl; 
    return 0;
} 
void swap(int& x, int& y) { 
    int temp = x; 
    x = y; 
    y = temp; 
} 
