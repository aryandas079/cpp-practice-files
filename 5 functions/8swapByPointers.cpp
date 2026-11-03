// this is the program used to swap numbers 
// using pointers 
#include<iostream>
using namespace std;
void swap(int* x, int* y) { 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
}
int main() {
    int number1, number2; 
    cout<<"enter 1st number: "; 
    cin>>number1; 
    cout<<"enter 2nd number: "; 
    cin>>number2; 
    // printing the original numbers 
    cout<<"original numbers: "<<number1<<" "<<number2<<endl; 
    // now using the swap function with pointers 
    // sending reference input 
    swap(&number1, &number2); 
    // printing the new swapped numbers 
    cout<<"original numbers: "<<number1<<" "<<number2<<endl; 
    return 0;
} 
