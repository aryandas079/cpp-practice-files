// this program is use to Count the number of triplets 
// whose sum is equal to the given value x 
#include<iostream>
#include<vector>
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
    // now finding out the numbers 
    int target; 
    cout<<"enter target: "; 
    cin>>target; 
    int count = 0;
    cout << "numbers are: ";
    for (int i = 0; i < v.size() - 2; i++) {
        for (int j = i + 1; j < v.size() - 1; j++) {
            for (int k = j + 1; k < v.size(); k++) {
                if (v[i] + v[j] + v[k] == target) {
                    cout << v[i] << " " << v[j] << " " << v[k] << endl;
                    count++;
                }
            }
        }
    }
    cout << "number of triplets: " << count << endl;
    return 0;
} 
