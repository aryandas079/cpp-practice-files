// this is the code used to print factorial 
// using recursion 
#include<iostream>
using namespace std; 
int recursiveFact(int x) {
    if (x == 0)
        return 1; 
    return x * recursiveFact(x - 1);
}
int main() {
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    // checking for the edge case 
    if (number < 0) { 
        cout<<"enter a number greater than 0"<<endl; 
        return 1; 
    }
    // now making the recursive call 
    int factorial = recursiveFact(number); 
    cout<<number<<"! : "<<factorial<<endl; 
    return 0; 
} 
