// this is the program to find the highest factor of a number 
#include<iostream>
using namespace std;

int main() {
    int number, factor; 
    cout<<"enter number: "; 
    cin>>number; 
    factor = 0;  
    for (int i = 0; i < number - 1; i++) { 
        if (number % (i + 1) == 0) { 
            factor = (i + 1); 
        }
    } 
    cout<<"highest factor of "<<number<<" = "<<factor<<endl; 
    return 0;
} 
