// this is the program used to find the total number of digits 
// in a number using strings 
#include<iostream>
using namespace std;

int main() {
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    string s = to_string(number); 
    int digits = s.length(); 
    cout<<"total number of digits: "<<digits<<endl; 
    return 0;
} 
