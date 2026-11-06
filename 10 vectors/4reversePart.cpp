// this is the program use to reverse a part of the 
// given input array 
#include<iostream>
#include<vector>
using namespace std;
void swap(int& a, int&b) { 
    int temp = a; 
    a = b; 
    b = temp; 
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
    // now getting the point to dissect the array from the user  
    int start, end; 
    cout<<"enter initial point: "; 
    cin>>start; 
    cout<<"enter final point: "; 
    cin>>end; 
    // checking for the edge cases 
    if (start > size || start < 0 || end > size || end < 0) { 
        cout<<"enter valid points"<<endl; 
        return 1; 
    } 
    // now reversing part of the array 
    // using two pointers approach 
    int i = start, j = end; 
    while (i < j) { 
        swap(v[i], v[j]); 
        i++; 
        j--;  
    } 
    // now printing the reversed array 
    cout<<"reversed array: "; 
    for (int i = 0; i < v.size(); i++) { 
        cout<<v.at(i)<<" "; 
    } 
    cout<<endl; 
    return 0;
} 
