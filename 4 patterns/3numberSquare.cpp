// this is the program to print a number square 
// using loops 
#include<iostream>
using namespace std;

int main() {
    int side; 
    cout<<"enter side: "; 
    cin>>side; 
    for (int i = 0; i < side; i++) { 
        for (int j = 0; j < side; j++) 
            cout<<j + 1<<" "; 
        cout<<endl; 
    } 
    return 0;
} 
