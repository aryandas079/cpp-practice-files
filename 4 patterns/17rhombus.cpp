// this is the program use to print a rhombus 
// using loops 
#include<iostream>
using namespace std;

int main() {
    int side; 
    cout<<"enter side: "; 
    cin>>side; 
    // now using the logic to print the rhombus 
    for (int i = 0; i < side; i++) { 
        // first loops is for printing the reversed triangle 
        for (int j = side; j > i; j--) { 
            cout<<"  "; 
        } 
        // second loop is for printing the regular square 
        for (int j = 0; j < side; j++) { 
            cout<<"* "; 
        } 
        cout<<endl;
    }
    return 0;
} 
