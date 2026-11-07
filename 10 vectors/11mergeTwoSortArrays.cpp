// this is the program use to merge two sorted arrays 
#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;
vector<int> threePointMerge(vector<int>& x, vector<int>& y) { 
    int sizeX = x.size(); 
    int sizeY = y.size(); 
    int sizeZ = sizeX + sizeY; 
    vector<int> result; 
    sort(x.begin(), x.end()); 
    sort(y.begin(), y.end()); 
    int i = 0; 
    int j = 0; 
    while (i < sizeX && j < sizeY) { 
        if (x[i] < y[j]) { 
            result.push_back(x[i]); 
            i++; 
        } else { 
            result.push_back(y[j]); 
            j++; 
        } 
    } 
    while (i < sizeX) { 
        result.push_back(x[i]); 
        i++; 
    } 
    while (j < sizeY) { 
        result.push_back(y[j]); 
        j++; 
    } 
    return result; 
}
int main() {
    vector<int> v1; 
    vector<int> v2; 
    vector<int> sortedArray; 
    int sizeV1, sizeV2, sizeV3, input; 
    cout<<"enter size of 1st vector: "; 
    cin>>sizeV1; 
    cout<<"enter size of 2nd vector: "; 
    cin>>sizeV2; 
    // now taking inputs for 1st vector 
    cout<<"enter elements of 1st vector: "; 
    for (int i = 0; i < sizeV1; i++) { 
        cin>>input; 
        v1.push_back(input); 
    } 
    // now taking inputs for the 2nd vector 
    cout<<"enter elements of 2ns vector: "; 
    for (int i = 0; i < sizeV2; i++) { 
        cin>>input; 
        v2.push_back(input); 
    } 
    // now printing the 1st and 2nd vector 
    cout<<"original V1: "; 
    for (int i = 0; i < v1.size(); i++) { 
        cout<<v1[i]<<" "; 
    } 
    cout<<endl; 
    cout<<"original V2: "; 
    for (int i = 0; i < v2.size(); i++) { 
        cout<<v2[i]<<" "; 
    } 
    cout<<endl; 
    // now using the logic 
    sortedArray = threePointMerge(v1, v2);
    // now printing the merged sorted array 
    cout<<"merged sorted array: "; 
    for (int i = 0; i < sortedArray.size(); i++) { 
        cout<<sortedArray[i]<<" "; 
    } 
    cout<<endl; 
    return 0;
} 
