// this program is used to find the largest three elements in the array 
#include<iostream>
#include<vector> 
#include<climits>
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
    // finding the largest 
    int max = INT_MIN, secMax = INT_MIN, thirdMax = INT_MIN; 
    for (int i = 0; i < v.size(); i++) { 
        if (v[i] > max) { 
            thirdMax = secMax; 
            secMax = max; 
            max = v[i]; 
        } else if (v[i] > secMax) { 
            thirdMax = secMax; 
            secMax = v[i]; 
        } else if (v[i] > thirdMax) { 
            thirdMax = v[i]; 
        } 
    } 
    cout<<"three largest elements: "<<max<<" "<<secMax<<" "<<thirdMax<<endl; 
    return 0;
} 
