// this is the program use to copy the contents of one
// array into another in the reverse order 
#include<iostream>
using namespace std;

int main() {
    int size; 
    cout<<"enter array size: "; 
    cin>>size; 
    // now getting array inputs 
    int arr[size]; 
    cout<<"enter array elements: "; 
    for (int i = 0; i < size; i++) { 
        cin>>arr[i]; 
    } 
    // now using the algorithm 
    int reverseArr[size]; 
    for (int i = 0; i < size; i++) { 
        reverseArr[i] = arr[size - (i + 1)]; 
    } 
    // now printing the values of the reversed array 
    cout<<"values of reversed array: "; 
    for (int i = 0; i < size; i++) { 
        cout<<reverseArr[i]<<" "; 
    } 
    cout<<endl;
    return 0;
} 
