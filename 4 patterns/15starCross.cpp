// this program is used to print the star cross 
// using loops 
#include<iostream>
using namespace std;

int main() {
    int side; 
    cout<<"enter side: "; 
    cin>>side; 
    // checking an edge case 
    if (side < 0 || side % 2 == 0) { 
        cout<<"enter valid side for printing cross"<<endl; 
        return 1; 
    }
    // now the logic for printing the cross 
    for (int i = 0; i < side; i++) { 
        for (int j = 0; j < side; j++) { 
            if (i == j) 
                cout<<"* "; 
            else if (i + j == side - 1) 
                cout<<"* "; 
            else 
                cout<<"  "; 
        } 
        cout<<endl; 
    }
    return 0;
} 
