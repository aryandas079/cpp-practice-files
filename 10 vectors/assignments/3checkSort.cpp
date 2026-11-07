// this program is use to check if the given array 
// is sorted or not 
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v; 
    int size, input; 
    cout<<"enter size: "; 
    cin>>size; 
    for (int i = 0; i < size; i++) { 
        cin>>input; 
        v.push_back(input); 
    } 
    // now checking if it is sorted or not 
    bool isSort = true; 
    for (int i = 0; i < v.size() - 1; i++) { 
        if (v[i] > v[i + 1]) { 
            isSort = false; 
            break; 
        }
    } 
    isSort ? cout<<"array is sorted"<<endl : cout<<"array is not sorted"<<endl; 
    return 0;
} 
