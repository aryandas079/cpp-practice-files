// here we need to manipulate all the elements in an array as per this 
// change the value of all odd indexed elements to its second multiple and
// increment all even indexed value by 10 
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
    // now using the logic to print the required thing 
    for (int i = 0; i < size; i++) { 
        if (i % 2 == 0) 
            arr[i] += 10; 
        else 
            arr[i] *= 2; 
    } 
    // now printing the array 
    cout<<"values of squared array: "; 
    for (int i = 0; i < size; i++) { 
        cout<<arr[i]<<" "; 
    } 
    cout<<endl;
    return 0;
} 
