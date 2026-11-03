// this is the program to print odd numbers between m and n 
#include<iostream>
using namespace std;

int main() {
    int m, n; 
    cout<<"enter 1st number: "; 
    cin>>m;
    cout<<"enter 2nd number: "; 
    cin>>n; 
    // now the logic 
    cout<<"odd numbers: ";
    for (int i = m + 1; i < n; i++) { 
        if (i % 2 != 0) 
            cout<<i<<" "; 
    } 
    cout<<endl; 
    return 0;
} 
