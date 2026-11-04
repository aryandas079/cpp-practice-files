// this is the code use to print the fibonacci series 
// using recursions 
#include<iostream>
using namespace std;
int fibonacci(int x) { 
    if (x == 1 || x == 2) 
        return 1; 
    return fibonacci(x - 1) + fibonacci(x - 2); 
}
int main() {
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    int value = fibonacci(number); 
    cout<<"fibonacci series till "<<number<<" = "<<value<<endl; 
    return 0;
} 
