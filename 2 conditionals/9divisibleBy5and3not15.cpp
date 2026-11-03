// this is the program to check whether a number is divisible by 5 or 3 
// but not by 15  
#include<iostream> 
using namespace std; 
int main() { 
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    if ((number % 3 == 0 || number % 5 == 0) && (number % 15 != 0)) 
        cout<<"number is divisible by 3 or 5 and not by 15"<<endl; 
    else 
        cout<<"doesn't fit the conditions"<<endl; 
} 
