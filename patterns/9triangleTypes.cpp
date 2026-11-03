// this is the program use to print different types of 
// triangle patterns using loops 
#include<iostream>
using namespace std;

int main() {
    int side; 
    cout<<"enter side: "; 
    cin>>side; 
    // first pattern 
    for (int i = 0; i < side; i++) { 
        for (int j = side; j > i; j--) { 
            cout<<j<<" "; 
        } 
        cout<<endl; 
    } 
    cout<<endl;
    // second pattern 
    for (int i = 0; i < side; i++) { 
        for (int j = side; j > i; j--) { 
            cout<<i + 1<<" "; 
        } 
        cout<<endl; 
    } 
    cout<<endl;
    // third pattern 
    for (int i = 0; i < side; i++) { 
        for (int j = 0; j < i + 1; j++) { 
            cout<<side - j<<" "; 
        } 
        cout<<endl; 
    } 
    return 0;
} 
