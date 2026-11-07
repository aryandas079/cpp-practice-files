// this is the program use to sort three numbers 
// 1 2 and 0 
#include<iostream>
#include<vector>
using namespace std;
void sortItems(vector<int>& x, int& y) { 
    int numberZeroes = 0, numberOnes = 0, numberTwos = 0; 
    for (int i = 0; i < y; i++) { 
        if (x[i] == 0) numberZeroes++; 
        else if (x[i] == 1) numberOnes++; 
        else numberTwos++; 
    } 
    // now making the list 
    for (int i = 0; i < y; i++) { 
        if (numberZeroes > 0) { 
            x[i] = 0; 
            numberZeroes--; 
        }
        else if (numberZeroes + numberOnes > 0) { 
            x[i] = 1; 
            numberOnes--; 
        }
        else  { 
            x[i] = 2; 
        }
    } 
}
int main() {
    vector<int> v; 
    int size, x; 
    cout<<"enter array size: "; 
    cin>>size; 
    // now getting the values in the array 
    cout<<"enter elements: "; 
    for (int i = 0; i < size; i ++) { 
        cin>>x; 
        if (x != 1 && x != 0 && x != 2) { 
            cout<<"enter only 0s 1s and 2s"<<endl; 
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
    // now using the logic 
    sortItems(v, size); 
    // now printing the sorted array 
    cout<<"sorted array: "; 
    for (int i = 0; i < v.size(); i++) { 
        cout<<v[i]<<" "; 
    } 
    cout<<endl; 
    return 0; 
} 
