// this is the code used to find the next permutation 
// steps are 
// 1. find the pivot index 
// 2. reverse all the things after the pivot index 
// 3. swap pivot and pivot index plus one 
#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std; 
void swap(int& x, int& y) { 
    int temp = x; 
    x = y; 
    y = temp; 
}
vector<int> nextPermutation(vector<int>& x) { 
    int size = x.size(); 
    // finding the pivot index 
    int index = -1; 
    for (int i = size - 1; i > 0; i--) { 
        if (x[i] > x[i - 1]) { 
            index = i - 1; 
            break; 
        } 
    } 
    // if no pivot exists, reverse the whole array
    if (index == -1) { 
        reverse(x.begin(), x.end()); 
        return x; 
    } 
    // Find the smallest number greater than nums[index] from the right
    for (int i = size - 1; i > index; i--) {
        if (nums[i] > nums[index]) {
            swap(nums[index], nums[i]);
            break;
        }
    } 
    // reversing all the things after the pivot index 
    reverse(x.begin() + index + 1, x.end()); 
    return x; 
}
int main() {
    vector<int> v; 
    int size, input; 
    cout<<"enter array size: "; 
    cin>>size; 
    cout<<"enter array elements: "; 
    for (int i = 0; i < size; i++) { 
        cin>>input; 
        v.push_back(input); 
    } 
    // now printing the original array 
    cout<<"original array: "; 
    for (int i = 0; i < v.size(); i++) { 
        cout<<v[i]<<" "; 
    } 
    cout<<endl; 
    // now using logic to find the next permutaion 
    vector<int> result = nextPermutation(v); 
    // now printing out the next permutation 
    cout<<"next permutation: "; 
    for (int i = 0; i < result.size(); i++) { 
        cout<<v[i]<<" "; 
    } 
    cout<<endl; 
    return 0;
} 
