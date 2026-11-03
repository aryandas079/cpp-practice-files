// this is the program to check whether a number is divisible by 5 and 3 
#include<iostream> 
using namespace std; 
int main() { 
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    if (number % 3 == 0 && number % 5 == 0) 
        cout<<"number is divisible by both 3 and 5"<<endl; 
    else 
        cout<<"number is not divisible by 3 and 5"<<endl; 
} 
