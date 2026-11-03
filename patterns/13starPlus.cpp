// this program is use to print a star plus 
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
    // now logic for printing the cross 
    for (int i = 0; i < side; i++) { 
        for (int j = 0; j < side; j++) { 
            int iMid = side / 2;
            int jMid = side / 2;

            if (i == iMid || j == jMid) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        } 
        cout<<endl; 
    }
    return 0;
} 
