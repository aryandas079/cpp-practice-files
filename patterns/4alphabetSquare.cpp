// this is the program to print an alphabet square of side m 
// using loops 
#include<iostream>
using namespace std;

int main() {
    int side;
    cout<<"enter side: "; 
    cin>>side; 
    if (side > 26 || side < 0) { 
        cout<<"enter valide side for an alphabet rectangle"<<endl; 
        return 1; 
    }
    for (int i = 0; i < side; i++) { 
        for (int j = 65; j < 65 + side; j++) 
            cout<< (char) j<<" "; 
        cout<<endl; 
    } 
    return 0;
} 
