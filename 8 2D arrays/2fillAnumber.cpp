// this program is used to fill the entire matrix 
// with the same number 
#include<iostream>
using namespace std;

int main() {
    int size; 
    cout<<"enter size of square matrix: "; 
    cin>>size; 
    int arr[size][size]; 
    // now taking an input number 
    int number; 
    cout<<"number: "; 
    cin>>number; 
    // now filling the entire matrix with the input number 
    for (int i = 0; i < size; i++) { 
        for (int j = 0; j < size; j++) { 
            arr[i][j] = number; 
        }
    } 
    // now printing out the array input 
    for (int i = 0; i < size; i++) { 
        for (int j = 0; j < size; j++) { 
            cout<<arr[i][j]<<" "; 
        } 
        cout<<endl; 
    }     
    return 0;
} 
