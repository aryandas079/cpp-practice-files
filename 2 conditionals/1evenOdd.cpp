// this is the program to calculate whether the number is even or odd 
#include<iostream> 
using namespace std; 
int main() { 
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    number % 2 == 0? cout<<"the number is even"<<endl : cout<<"the number is odd"<<endl; 
} 
