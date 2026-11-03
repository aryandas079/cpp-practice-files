// this is the program used to print the flipped triangle 
// using loops 
#include<iostream>
using namespace std;

int main() {
    int side; 
    cout<<"enter side: "; 
    cin>>side; 
    // now the logic for printing the flipped triangle 
    for (int i = 0; i < side; i++) { 
        for (int j = 0; j < side; j++) { 
            if (i + j >= side - 1) 
                cout<<"* "; 
            else 
                cout<<"  ";
        } 
        cout<<endl; 
    }
    return 0;
} 
