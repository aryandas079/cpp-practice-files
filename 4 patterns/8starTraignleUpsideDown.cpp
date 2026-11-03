// this is the project which prints a star triangle upside down 
// using loops 
#include<iostream>
using namespace std;

int main() {
    int side; 
    cout<<"enter side: "; 
    cin>>side; 
    for (int i = 0; i < side; i++) { 
        for (int j = side; j > i; j--) { 
            cout<<"* "; 
        } 
        cout<<endl; 
    }
    return 0;
} 
