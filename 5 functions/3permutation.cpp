// this program is used to print the permutation of a number 
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
    cout<<"input permutation: "<<n<<"P"<<r<<endl; 
    // checking edge cases 
    if (n < r || n < 0 || r < 0) { 
        cout<<"enter valid input"<<endl; 
        return 1; 
    } 
    // finding permutation of the number 
    int permutation = factorial(n) / factorial(n - r); 
    cout<<n<<"P"<<r<<": "<<permutation<<endl; 
    return 0;
} 
factorial(int x) { 
    int fact = 1; 
    for (int i = 0; i < x; i++) { 
        fact *= (i + 1); 
    } 
    return fact; 
} 
