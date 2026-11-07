// this program is used to Count the number of elements strictly greater than x 
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
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    int count = 0; 
    for (int i = 0; i < v.size(); i++) { 
        if (v[i] > number) count++; 
    } 
    cout<<"required count: "<<count<<endl; 
    return 0;
} 
