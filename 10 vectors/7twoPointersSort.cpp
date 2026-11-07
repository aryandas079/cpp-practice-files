// this is the program use to sort 0s and 1s 
// using two pointers approach 
#include<iostream>
#include<vector>
using namespace std; 
void swap(int& x, int& y) { 
    int temp = x; 
    x = y; 
    y = temp; 
}
void twoPointSwap(vector<int>& x, int& y) { 
    int i = 0, j = y - 1; 
    while (i < j) { 
        if (x[i] == 0) { 
            i++; 
        } else { 
            swap(x[i], x[j]); 
            j--; 
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
    // now using the two pointers approach 
    twoPointSwap(v, size); 
    // now printing the sorted array 
    cout<<"sorted array: "; 
    for (int i = 0; i < v.size(); i++) { 
        cout<<v[i]<<" "; 
    } 
    cout<<endl; 
    return 0;
} 
