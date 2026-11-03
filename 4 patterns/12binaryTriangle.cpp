// this is the program to print the binary triangle 
// using loops 
#include<iostream>
using namespace std;

int main() { 
    int side; 
    cout<<"enter side: "; 
    cin>>side; 
    // now the logic for printing the binary triangle 
    for (int i = 0; i < side; i++) { 
        for (int j = 0; j < i + 1; j++) { 
            if ((i + j) % 2 == 0) 
                cout<<"1 "; 
            else 
                cout<<"0 "; 
        } 
        cout<<endl; 
    }
    return 0;
} 
