// this is the program use to find the minimum element 
// in a matrix 
#include<iostream> 
#include<climits>
using namespace std;

int main() {
    int m, n; 
    // getting dimensions from the user 
    cout<<"enter dimension m: "; 
    cin>>m; 
    cout<<"enter dimension n: "; 
    cin>>n; 
    // now getting the input for the matrix 
    int arr[m][n]; 
    cout<<"enter array elements: ";  
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            cin>>arr[i][j]; 
        }
    } 
    // now checking for the min element 
    int min = INT_MAX; 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            if (arr[i][j] < min) 
                min = arr[i][j]; 
        }
    } 
    // now printing out the minimum number 
    cout<<"minimum number: "<<min<<endl; 
    return 0;
} 
