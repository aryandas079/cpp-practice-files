// this is the leet code question number 1 
// TWO SUM 
#include<iostream> 
#include<vector>
using namespace std; 
// required answer 
vector<int> twoSum(vector<int>& x, int& y) { 
    for (int i = 0; i < x.size(); i++) { 
        for (int j = 1; j < x.size(); j++) { 
            if (x[i] + x[j] == y) { 
                return {i, j}; 
                break; 
            }
        }
    }
} 
// the above function is the answer 
int main() {
    vector<int> v; 
    int size, x; 
    cout<<"enter array size: "; 
    cin>>size; 
    // now getting the inputs 
    cout<<"enter array values: "; 
    for (int i = 0; i < size; i++) { 
        cin>>x; 
        v.push_back(x); 
    }  
    // now finding the two sum function 
    int target; 
    cout<<"enter target: "; 
    cin>>target; 
    vector<int> answer = twoSum(v, target); 
    cout<<"the required array is : "; 
    for (int i = 0; i < answer.size(); i++) { 
        cout<<answer.at(i)<<" "; 
    } 
    cout<<endl; 
    return 0;
} 
