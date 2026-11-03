// this code is used to print an odd triangle 
// using loops 
#include<iostream>
using namespace std;

int main() {
    int side; 
    cout<<"enter side: "; 
    cin>>side; 
    // now printing the odd triangle 
    for (int i = 0; i < side; i++) { 
        for (int j = 0; j < i + 1; j++) { 
            cout<<2 * (j + 1) - 1<<" "; 
        } 
        cout<<endl; 
    }
    return 0;
} 
