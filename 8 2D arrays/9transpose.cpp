// this program is used to print the 
// transpose of a matrix 
#include<iostream>
using namespace std;

int main() {
    int m, n; 
    // getting the dimension of the matrix 
    cout<<"enter dimension m: "; 
    cin>>m; 
    cout<<"enter dimension n: "; 
    cin>>n; 
    int arr[m][n]; 
    // now getting the value of the matrix 
    cout<<"enter matrix values: "; 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            cin>>arr[i][j]; 
        }
    } 
    // now printing the original matrix 
    cout<<"original matrix: "<<endl; 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            cout<<arr[i][j]<<" "; 
        } 
        cout<<endl; 
    } 
    // now making the transpose 
    int transpose[n][m]; 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
            transpose[i][j] = arr[j][i];  
        }
    } 
    // printing the transpose 
    cout<<"transposed matrix: "<<endl; 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
            cout<<transpose[i][j]<<" "; 
        } 
        cout<<endl; 
    } 
    return 0;
} 
