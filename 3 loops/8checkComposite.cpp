// this is the program to check whether a number is composite or not 
#include<iostream>
using namespace std;

int main() {
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    bool composite = false; 
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            composite = true;
            break;
        }
    }
    if (number <= 1) {
        cout << "number is neither prime nor composite" << endl;
    }
    else {
        composite ? cout << "number is composite" << endl
                  : cout << "number is prime" << endl;
    } 
    return 0;
} 
