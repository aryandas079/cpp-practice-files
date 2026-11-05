// this program is used to find the difference between the sum of elements
// at even indices to the sum of elements at odd indices 
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
    // now the algorithm for the program 
    // finding sum of even and odd places 
    int sumEven = 0, sumOdd = 0; 
    for (int i = 0; i < size; i++) { 
        if (i % 2 == 0) 
            sumEven += arr[i]; 
        else 
            sumOdd += arr[i]; 
    } 
    // now printing the values of even and odd sum 
    cout<<"even sum: "<<sumEven<<endl; 
    cout<<"odd sum: "<<sumOdd<<endl; 
    // now printing the difference between the odd and even sum 
    cout<<"required difference: "<<sumEven - sumOdd<<endl; 
    return 0;
} 
