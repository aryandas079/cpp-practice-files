// this program is used to find the product of 
// all the elements in a matrix 
#include<iostream>
using namespace std;

int main() {
    int m, n; 
    // getting the dimensions 
    cout<<"enter dimension m: "; 
    cin>>m; 
    cout<<"enter dimension n: "; 
    cin>>n; 
    int arr[m][n]; 
    // now inserting values in the matrix 
    cout<<"enter matrix values: "; 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            cin>>arr[i][j]; 
        }
    } 
    // now finding the product 
    int product = 1; 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            product *= arr[i][j]; 
        }
    } 
    // now printing the product 
    cout<<"required product: "<<product<<endl; 
    return 0;
} 
