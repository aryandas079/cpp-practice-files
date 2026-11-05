// this program is use to count the number of elements in given array
// greater than a given number x 
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
    // now the algorithm 
    int count = 0; 
    int number; 
    cout<<"enter comparator number: "; 
    cin>>number; 
    for (int i = 0; i < size; i++) { 
        if (arr[i] > number) 
            count++; 
    } 
    cout<<"number of elements greater than number: "<<count<<endl; 
    return 0;
} 
