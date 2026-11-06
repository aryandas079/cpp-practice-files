// this is the program to reverse the array without using any 
// extra array 
#include<iostream> 
#include<vector>
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
    // now using logic to build a new reverse array without using any extra array 
    // using two pointers method 
    int i = 0, j = v.size() - 1; 
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
