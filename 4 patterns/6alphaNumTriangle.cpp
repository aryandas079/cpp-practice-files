// this is the program to print the alphabet and numeric triangle 
// using loops 
#include<iostream>
using namespace std;

int main() {
    int side; 
    cout<<"enter side: "; 
    cin>>side; 
    if (side > 26 || side < 0) { 
        cout<<"enter valide side for getting alphabet triangle"<<endl; 
        return 1; 
    }
    cout<<endl;  
    cout<<"alphabet triangle"<<endl; 
    cout<<endl; 
    for (int i = 0; i < side; i++) { 
        for (int j = 65; j < 65 + i + 1; j++) 
            cout<<(char) j<<" "; 
        cout<<endl; 
    } 
    cout<<endl; 
    cout<<"numeric triangle"<<endl; 
    for (int i = 0; i < side; i++) { 
        for (int j = 0; j < i; j++) 
            cout<<j + 1<<" "; 
        cout<<endl; 
    } 
    return 0;
} 
