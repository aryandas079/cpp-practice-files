// this is the code used to find the second max element 
// in the array 
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
    // now the algorithm to find the second max element 
    int max = INT_MIN, secondMax = INT_MIN; 
    for (int i = 0; i < size; i++) { 
        if (arr[i] > max) 
            max = arr[i]; 
    } 
    // now checking for the second max 
    for (int i = 0; i < size; i++) { 
        if (arr[i] > secondMax && arr[i] < max) 
            secondMax = arr[i]; 
    } 
    // now printing the values 
    cout<<"maximum element: "<<max<<endl; 
    if (secondMax == INT_MIN)
        cout << "No distinct second maximum element.\n";
    else
        cout << "Second maximum element: " <<secondMax<<endl;
    return 0;
} 
