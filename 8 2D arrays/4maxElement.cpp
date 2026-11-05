// this is the program use to find the maximum element 
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
    // now checking for the max element 
    int max = INT_MIN; 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            if (arr[i][j] > max) 
                max = arr[i][j]; 
        }
    } 
    // now printing out the maximum number 
    cout<<"maximum number: "<<max<<endl; 
    return 0;
} 
