// this is the program use to calculate the sum of 
// all the elements in a given array 
#include<iostream>
using namespace std;

int main() {
    int size; 
    cout<<"enter array size: "; 
    cin>>size; 
    int arr[size]; 
    // now getting the values in the array 
    cout<<"enter array elements: "; 
    for (int i = 0; i < size; i++) { 
        cin>>arr[i]; 
    } 
    // now printing the sum 
    int sum = 0; 
    for (int i = 0; i < size; i++) { 
        sum += arr[i]; 
    } 
    cout<<"required sum: "<<sum<<endl; 
    return 0;
} 
