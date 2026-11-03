// this is the code to print the table of a number  
#include<iostream>
using namespace std;

int main() {
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    for (int i = 0; i < 10; i++) { 
        cout<<number<<" x "<<i + 1<<" = "<<number * (i + 1)<<endl; 
    }
    return 0;
} 
