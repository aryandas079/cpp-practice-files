// this program is used to print the combination of a number 
// using functions 
#include<iostream>
using namespace std; 
int factorial(int x); 

int main() {
    int n, r; 
    cout<<"enter n: "; 
    cin>>n; 
    cout<<"enter r: "; 
    cin>>r; 
    cout<<"input combination: "<<n<<"C"<<r<<endl; 
    // checking edge cases 
    if (n < r || n < 0 || r < 0) { 
        cout<<"enter valid input"<<endl; 
        return 1; 
    } 
    // finding combination of the number 
    int combination = factorial(n) / (factorial(r) * factorial(n - r)); 
    cout<<n<<"C"<<r<<": "<<combination<<endl; 
    return 0;
} 
factorial(int x) { 
    int fact = 1; 
    for (int i = 0; i < x; i++) { 
        fact *= (i + 1); 
    } 
    return fact; 
} 
