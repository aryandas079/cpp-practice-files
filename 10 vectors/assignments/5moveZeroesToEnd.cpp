// this program is use to move all the zeroes to the end 
// using two Pass 
#include<iostream>
#include<vector> 
#include<algorithm>
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
    cout<<"original array: "; 
    for (int i = 0; i < v.size(); i++) { 
        cout<<v[i]<<" "; 
    } 
    cout<<endl; 
    int index = 0;
    // first pass: move non-zeroes to the front
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != 0) {
            v[index] = v[i];
            index++;
        }
    }
    // second pass: fill the end with zeroes
    for (int i = index; i < v.size(); i++) {
        v[i] = 0;
    }
    // now printing the array 
    cout<<"sorted array with zeroes at last: "; 
    for (int i = 0; i < v.size(); i++) { 
        cout<<v[i]<<" "; 
    }
    cout<<endl; 
    return 0;
} 
