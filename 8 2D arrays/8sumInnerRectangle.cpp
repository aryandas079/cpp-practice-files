// this program is use to find the  matrix 'a' of dimension n x m and 2
// coordinates (i1, j1) and (i2, j2). Return the sum of
// the rectangle from (i1, j1) to (i2, j2) 
#include<iostream>
using namespace std;

int main() {
    int m, n; 
    // now getting the dimensions of the matrix 
    cout<<"enter dimension m: "; 
    cin>>m; 
    cout<<"enter dimension n: "; 
    cin>>n; 
    int arr[m][n]; 
    // now obtaining the input for the matrix 
    cout<<"enter array inputs: "; 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            cin>>arr[i][j]; 
        }
    } 
    // now obtaining dimension for the inner rectangle 
    int x, y; 
    cout<<"enter x: "; 
    cin>>x; 
    cout<<"enter y: "; 
    cin>>y; 
    // checking the edge case 
    if (x > m || y > n || x > y) { 
        cout<<"values of x and y shouldn't exceed the matrix dimension"<<endl; 
        return 1; 
    } 
    if (x == y) { 
        cout<<"inner rectangle sum: "<<arr[x][y]<<endl; 
        return 0; 
    } else { 
        int sum = 0; 
        for (int i = 0; i < x; i++) { 
            for (int j = 0; j < y; j++) { 
                sum += arr[i][j]; 
            }
        } 
        cout<<"inner rectangle sum: "<<sum<<endl; 
    }
    return 0;
} 
