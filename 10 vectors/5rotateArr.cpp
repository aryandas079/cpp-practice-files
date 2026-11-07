// this program is use to rotate the array by k elements 
#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;
void swap(int& x, int& y) { 
    int temp = x; 
    x = y; 
    y = temp; 
}
int main() { 
    vector<int> v; 
    int size, x; 
    cout<<"enter array size: "; 
    cin>>size; 
    // now getting the values of the array 
    cout<<"enter elements: "; 
    for (int i = 0; i < size; i++) { 
        cin>>x; 
        v.push_back(x); 
    } 
    // now printing the original array 
    cout<<"original array: "; 
    for (int i = 0; i < v.size(); i++) { 
        cout<<v.at(i)<<" "; 
    } 
    cout<<endl; 
    // now getting the value of k for rotating the array 
    int k; 
    cout<<"enter value of k: "; 
    cin>>k; 
    if (size < 0 || (size > 0 && (k < 0 || k > size))) {
        cout<<"enter valid values"<<endl;
        return 1;
    }
    if (size == 0 || k == 0 || k == size) {
        cout<<"rotated array: ";
        for (int i = 0; i < v.size(); i++) {
            cout<<v.at(i)<<" ";
        }
        cout<<endl;
        return 0;
    }
    // reversing the last two digits after k 
    int i = k, j = v.size() - 1; 
    while (i < j) { 
        swap(v[i], v[j]); 
        i++; 
        j--; 
    } 
    // now reversing the digits before k 
    i = 0, j = k - 1; 
    while (i < j) { 
        swap(v[i], v[j]); 
        i++; 
        j--; 
    } 
    // now reversing the entire array 
    reverse(v.begin(), v.end()); 
    // now printing the entire rotated array 
    cout<<"rotated array: "; 
    for (int i = 0; i < v.size(); i++) { 
        cout<<v.at(i)<<" "; 
    } 
    cout<<endl; 
    return 0;
} 
