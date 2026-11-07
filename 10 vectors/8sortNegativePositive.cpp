// this is the program use to sort negative and positive 
// numbers using two pointers 
#include<iostream>
#include<vector>
using namespace std; 
void swap(int& x, int& y) { 
    int temp = x; 
    x = y; 
    y = temp; 
}
void twoPointSort(vector<int>& x, int& y) { 
    int i = 0, j = y - 1; 
    while (i < j) { 
        if (x[i] > 0) 
            i++; 
        else { 
            swap(x[i], x[j]); 
            j--; 
        }
    }
}
int main() {
    vector<int> v; 
    int size, x; 
    cout<<"enter array size: "; 
    cin>>size; 
    // now getting the values in the array 
    cout<<"enter elements: "; 
    for (int i = 0; i < size; i ++) { 
        cin>>x; 
        v.push_back(x); 
    }
    // now printing the original array 
    cout<<"original array: "; 
    for (int i = 0; i < size; i++) { 
        cout<<v[i]<<" ";  
    } 
    cout<<endl; 
    // now sorting the array with two pointers method 
    twoPointSort(v, size); 
    // now printing the sorted array 
    cout<<"sorted array: "; 
    for (int i = 0; i < v.size(); i++) { 
        cout<<v[i]<<" "; 
    } 
    cout<<endl; 
    return 0;
} 
