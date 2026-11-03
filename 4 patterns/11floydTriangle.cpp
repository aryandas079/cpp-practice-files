// this is the code to print the floyd triangle 
// using loops 
#include<iostream>
using namespace std;

int main() {
    int side; 
    cout<<"enter side: "; 
    cin>>side; 
    int sum = 0; 
    // logic for floyd's triangle 
    for (int i = 0; i < side; i++) { 
        for (int j = 0; j < i + 1; j++) { 
            sum++; 
            cout<<sum<<" "; 
        } 
        cout<<endl; 
    }
    return 0;
} 
