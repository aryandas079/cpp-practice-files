// this is the program to print a triangle 
// using loops 
#include<iostream>
using namespace std;

int main() {
    int side; 
    cout<<"enter side: "; 
    cin>>side; 
    for (int i = 0; i < side; i++) { 
        for (int j = 0; j < i + 1; j++) 
            cout<<"*"<<" "; 
        cout<<endl; 
    }
    return 0;
} 
