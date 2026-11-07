// this program is used to sort 0s 1s and 2s 
// using the three pointers approach 
#include<iostream>
#include<vector>
using namespace std; 
void swap(int& x, int& y) { 
    int temp = x; 
    x = y; 
    y = temp; 
}
void threePointSort(vector<int>& x, int& y) { 
    int low = 0, mid = 0, high = y - 1; 
    while (mid <= high) { 
        if (x[mid] == 2) { 
            swap(x[mid], x[high]); 
            high--; 
        } else if (x[mid] == 0) { 
            swap(x[mid], x[low]); 
            low++; 
            mid++; 
        } else { 
            mid++; 
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
    // now using the logic of three pointers approach 
    threePointSort(v, size); 
    // now printing the sorted array 
    cout<<"sorted array: "; 
    for (int i = 0; i < v.size(); i++) { 
        cout<<v[i]<<" "; 
    } 
    cout<<endl; 
    return 0;
} 
