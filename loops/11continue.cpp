// this is the program in which continue is used to skip 
// a few rounds in the loop 
#include<iostream>
using namespace std;

int main() {
    int number, skip1, skip2, skip3; 
    cout<<"enter upto n to print: "; 
    cin>>number; 
    cout<<"enter 3 numbers to skip: "; 
    cin>>skip1>>skip2>>skip3; 
    if (skip1 > number || skip2 > number || skip3 > number) { 
        cout<<"enter valid numbers to be skipped"<<endl; 
        return 1;  
    }
    for (int i = 0; i < number; i++) { 
        if ((i + 1) == skip1 || (i + 1) == skip2 || (i + 1) == skip3) 
            continue; 
        else 
            cout<<i + 1<<" "; 
    } 
    cout<<endl; 
    return 0;
} 
