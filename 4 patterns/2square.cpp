// this is the program to print a square of side m  
// using loops 
#include<iostream>
using namespace std;

int main() {
    int side; 
    cout<<"enter side: "; 
    cin>>side; 
    for (int i = 0; i < side; i++) { 
        for (int j = 0; j < side; j++) 
            cout<<"* "; 
        cout<<endl; 
    } 
    return 0;
} 
