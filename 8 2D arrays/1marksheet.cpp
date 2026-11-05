// this is the program use to 
// make a table containing marks and roll number of students 
// in a 2D array 
#include<iostream>
using namespace std;

int main() {
    int total; 
    cout<<"enter number of students: "; 
    cin>>total; 
    // now putting in the values 
    int arr[total][2]; 
    for (int i = 0; i < total; i++) { 
            cout<<"enter roll: "; 
            cin>>arr[i][0]; 
            cout<<"enter marks: "; 
            cin>>arr[i][1]; 
        } 
    // now getting the outputs 
    cout<<"marksheet: "<<endl; 
    for (int i = 0; i < total; i++) { 
            cout<<"Roll: "<<arr[i][0]<<" "; 
            cout<<"Marks: "<<arr[i][1]<<endl; 
        } 
        cout<<endl; 
    return 0;
} 
