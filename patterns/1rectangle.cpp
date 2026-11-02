// this is the program to print a rectangle of side m * n 
// using loops 
#include<iostream>
using namespace std;

int main() {
    int length, breadth; 
    cout<<"enter length: "; 
    cin>>length; 
    cout<<"enter breadth: "; 
    cin>>breadth; 
    for (int i = 0; i < length; i++) { 
        for (int j = 0; j < breadth; j++) 
            cout<<"* "; 
        cout<<endl; 
    } 
    return 0;
} 
