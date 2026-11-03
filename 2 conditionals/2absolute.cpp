// this is the program to print the absolute of any input number 
#include<iostream> 
using namespace std; 
int main() { 
    float number; 
    cout<<"enter number: "; 
    cin>>number; 
    cout<<"absolute value: "; 
    number < 0 ? cout<<(-1)*number<<endl : cout<<number<<endl; 
}