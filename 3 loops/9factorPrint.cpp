// this is the code to print the factors of a number 
#include<iostream>
using namespace std;

int main() {
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    // now the logic 
    for (int i = 1; i < number; i++) { 
        if (number % i == 0) { 
            cout<<i<<" "; 
        } 
    } 
    cout<<endl; 
    return 0;
} 
