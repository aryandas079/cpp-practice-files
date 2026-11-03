// this is the program to print some basic of pointers 
#include<iostream>
using namespace std;

int main() { 
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    // getting address of the number variable using pointers 
    int* ptr = &number; 
    // printing the address of the pointer 
    cout<<ptr<<endl; 
    return 0;
}