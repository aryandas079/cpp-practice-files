// this program is used the find the amount of rainwater trapped 
#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;
int trap(vector<int>& height) { 
    int size = height.size(); 
    if (size == 0) return 0;
    vector<int> prevMax; 
    prevMax.push_back(height[0]); 
    // now filling up the previous maximum array 
    for (int i = 1; i < size; i++) { 
        prevMax.push_back(max(prevMax[i - 1], height[i])); 
    }
    // now filling up the next maximum array 
    vector<int> nextMax(size);
    nextMax[size - 1] = height[size - 1];

    for (int i = size - 2; i >= 0; i--) {
        nextMax[i] = max(nextMax[i + 1], height[i]);
    } 
    // now finding the diffrence array between prevMax and nextMax  
    vector<int> difference; 
    for (int i = 0; i < size; i++) { 
        difference.push_back(min(prevMax[i], nextMax[i])); 
    } 
    // now making the trap rainwater count  
    int count = 0; 
    for (int i = 0; i < size; i++) { 
        if (difference[i] > height[i]) { 
            count += difference[i] - height[i]; 
        } 
    } 
    // now returning the value 
    return count; 
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
    // now using the logic 
    // rainwater trapped 
    int amount = trap(v); 
    cout<<"amount of rainwater trapped: "<<amount<<endl; 
    return 0;
} 
