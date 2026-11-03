// this is the code used to print a pyramid 
// using loops 
#include<iostream>
using namespace std;

int main() {
    int side; 
    cout<<"enter side: "; 
    cin>>side; 
    // now using the logic to print the pyramid 
    for (int i = 0; i < side; i++) { 
        // first printing a reversed triangle 
        for (int j = side; j > i; j--) { 
            cout<<"  "; 
        } 
        // now printing a triangle with odd elements in it 
        for (int j = 0; j < 2 * (i + 1) - 1; j++) { 
            cout<<"* "; 
        } 
        cout<<endl; 
    }
    return 0;
} 
