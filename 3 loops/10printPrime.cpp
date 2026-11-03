// this is the program to print all the prime number till the input number 
#include<iostream>
using namespace std;

int main() {
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    cout<<"prime numbers: "; 
    for (int i = 2; i <= number; i++) { 
        bool prime = true; 
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
           cout << i << " ";
        } else {
            continue;
        }
    } 
    cout<<endl; 
    return 0;
} 
