// this program is use to print the alternate alphabet numeric triangle 
// using loops 
#include<iostream>
using namespace std;

int main() { 
    int side; 
    cout<<"enter side: "; 
    cin>>side; 
    if (side > 26 || side < 0) { 
        cout<<"enter valide side for getting alphabet triangle"<<endl; 
        return 1; 
    }
    for (int i = 0; i < side; i++) { 
        for (int j = 0; j < i + 1; j++) { 
            if (i % 2 == 0) { 
                cout<<(char) (j + 65)<<" "; 
            } 
            else { 
                cout<<j + 1<<" "; 
            } 
        } 
        cout<<endl; 
    }
    return 0;
} 
