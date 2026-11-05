// this program is use to find the matrix sum of two 
// 2D arrays 
#include<iostream>
using namespace std;

int main() {
    // taking the dimension inputs for the 2 matrices 
    int m, n; 
    cout<<"enter dimension m: "; 
    cin>>m; 
    cout<<"enter dimension n: "; 
    cin>>n; 
    // now taking input for the first matrix 
    int arrA[m][n]; 
    cout<<"enter matrix A inputs: "; 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            cin>>arrA[i][j]; 
        }        
    }
    // now taking input for the second matrix 
    int arrB[m][n]; 
    cout<<"enter matrix B inputs: "; 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            cin>>arrB[i][j]; 
        }        
    } 
    // now adding up the two matrices 
    int sum[m][n]; 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            sum[i][j] = arrA[i][j] + arrB[i][j]; 
        }        
    } 
    // now printing out the summation matix 
    cout<<"summation matrix: "<<endl; 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            cout<<sum[i][j]<<" "; 
        } 
        cout<<endl; 
    } 
    return 0;
} 
