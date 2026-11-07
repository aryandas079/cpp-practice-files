// this is the program use to sort an array of 
// 0s and 1s using two pass method 
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v; 
    int size, x; 
    cout<<"enter array size: "; 
    cin>>size; 
    // now getting the values in the array 
    cout<<"enter elements: "; 
    for (int i = 0; i < size; i ++) { 
        cin>>x; 
        if (x != 1 && x != 0) { 
            cout<<"enter only 0s and 1s"<<endl; 
            return 1; 
        } else { 
            v.push_back(x); 
        }
    }
    // now printing the original array 
    cout<<"original array: "; 
    for (int i = 0; i < size; i++) { 
        cout<<v[i]<<" ";  
    } 
    cout<<endl; 
    // now using the two pass method 
    // first pass 
    int numberZeroes = 0, numberOnes = 0; 
    for (int i = 0; i < v.size(); i++) { 
        if (v[i] == 0) 
            numberZeroes++; 
        else if (v[i] == 1) 
            numberOnes++; 
    } 
    // second pass 
    cout<<"sorted array: "; 
    while (numberZeroes > 0) { 
        cout<<"0 "; 
        numberZeroes--; 
    } 
    while (numberOnes > 0) { 
        cout<<"1 "; 
        numberOnes--; 
    } 
    cout<<endl; 
    return 0;
} 
