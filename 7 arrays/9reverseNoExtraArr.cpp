// this is the program used to swap two numbers 
// not using any extra array 
// two pointers method 
#include<iostream>
using namespace std;
void swap(int& x, int& y) { 
    int temp = x; 
    x = y; 
    y = temp; 
}
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
    // now using the algorithm for two pointers method 
    int i = 0, j = size - 1; 
    while (j > i) { 
        swap(arr[i], arr[j]); 
        i++; 
        j--; 
    } 
    // now printing the array 
    cout<<"values of reversed array: "; 
    for (int i = 0; i < size; i++) { 
        cout<<arr[i]<<" "; 
    } 
    cout<<endl;
    return 0;
} 
