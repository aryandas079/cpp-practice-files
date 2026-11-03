// this is the program used to swap two functions 
#include<iostream>
using namespace std;

int main() {
    int number1, number2; 
    cout<<"enter number1: "; 
    cin>>number1; 
    cout<<"enter number2: "; 
    cin>>number2; 
    // now the original values 
    cout<<"original values: "<<number1<<" "<<number2<<endl; 
    // now swapping with a temporary variable 
    int temp = number1; 
    number1 = number2; 
    number2 = temp; 
    // now the swapped values 
    cout<<"swapped values: "<<number1<<" "<<number2<<endl; 
    return 0;
} 
