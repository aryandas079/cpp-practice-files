// this is the code used to find the maximum value in an Array 
#include<iostream> 
#include<climits>
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
    // now using the linear search algorithm 
    int max = INT_MIN; 
    for (int i = 0; i < size; i++) { 
        if (arr[i] > max) 
            max = arr[i]; 
    } 
    cout<<"max value: "<<max<<endl; 
    return 0;
} 
