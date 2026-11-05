// this program is use to print the square 
// of elements in an array 
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
    // now making an array with the square of all the input values 
    int squareArr[size]; 
    for (int i = 0; i < size; i++) { 
        squareArr[i] = arr[i] * arr[i]; 
    } 
    // printing the square array 
    cout<<"values of squared array: "; 
    for (int i = 0; i < size; i++) { 
        cout<<squareArr[i]<<" "; 
    } 
    cout<<endl; 
    return 0;
} 
