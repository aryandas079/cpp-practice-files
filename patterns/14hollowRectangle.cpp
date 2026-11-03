// this is the code used to print the hollow rectangle 
// using loops 
#include<iostream>
using namespace std;

int main() {
    int length, breadth; 
    cout<<"enter length: "; 
    cin>>length; 
    cout<<"enter breadth: "; 
    cin>>breadth; 
    // now the logic for printing the hollow rectangle 
    for (int i = 0; i < length; i ++) { 
        for (int j = 0; j < breadth; j++) { 
            if (i == 0 || j == 0 || i == (length - 1) || j == (breadth - 1)) 
                cout<<"* "; 
            else 
                cout<<"  "; 
        } 
        cout<<endl; 
    }
    return 0;
} 
