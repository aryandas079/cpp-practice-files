// this program is use to check whether a number array 
// is a palindrome or not 
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
    // now the logic for checking palindrome 
    // using two pointers method 
    int i = 0, j = size - 1; 
    bool palindrome = true; 
    while (j > i) { 
        if (arr[i] != arr[size - 1]) 
            palindrome = false; 
            break; 
        i++; 
        j--; 
    } 
    // now printing the final result 
    palindrome ? cout<<"the given array is a palindrome"<<endl 
    : cout<<"the given array is not a palindrome"<<endl; 
    return 0; 
} 
