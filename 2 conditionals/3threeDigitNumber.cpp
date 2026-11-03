// this is the program to check whether the input number is three digit or not 
#include<iostream> 
using namespace std; 
int main() { 
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    if (number > 99 && number < 1000) 
        cout<<"the number is a three digit number"<<endl; 
    else 
        cout<<"the number is not a three digit number"<<endl; 
} 
