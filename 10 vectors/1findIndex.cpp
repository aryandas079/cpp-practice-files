// this program is use to find the last occurence 
// of a given number input in the array 
#include<iostream> 
#include<vector>
using namespace std;

int main() { 
    vector<int> v; 
    int size, x; 
    cout<<"enter size of array: "; 
    cin>>size; 
    // taking input in the vector 
    cout<<"enter values in array: "; 
    for (int i = 0; i < size; i++) { 
        cin>>x; 
        v.push_back(x); 
    } 

    // time consuming approach 
    // // now finding the index of the number in the array 
    // int number, index = -1; 
    // cout<<"enter number to find the index: "; 
    // cin>>number; 
    // for (int i = 0; i < v.size(); i++) { 
    //     if (v[i] == number) { 
    //         index = i; 
    //     }
    // } 

    // best approach is to find the answer from the last as it saves time 
    int number, index = -1; 
    cout<<"enter number to find the index: "; 
    cin>>number; 
    for (int i = v.size() -1; i > 0; i--) { 
        if (v[i] == number) { 
            index = i; 
            break; 
        }
    }
    // now printing the answer 
    cout<<"required index: "<<index<<endl; 
    return 0; 
} 
