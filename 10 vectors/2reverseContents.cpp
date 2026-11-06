// this is the program to reverse the contents 
// of the vector 
// by copying it in a reverse direction in a new array 
#include<iostream> 
#include<vector>
using namespace std;

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
    // now making a new array 
    vector<int> vRev; 
    for (int i = 0; i < v.size(); i++) { 
        vRev.push_back(v.at(size - 1 - i)); 
    } 
    // now printing the reversed array of the original 
    cout<<"reversed array: "; 
    for (int i = 0; i < v.size(); i++) { 
        cout<<vRev.at(i)<<" "; 
    } 
    cout<<endl; 
    return 0;
} 
