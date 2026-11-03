// this is the code used to print the both side pyramid 
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
    // now using the logic to print the pattern 
    int starCount = 1;
    int blankCount = side / 2;
    int mid = side / 2;

    for (int i = 0; i < side; i++) {

        // printing the blank part
        for (int j = 0; j < blankCount; j++) {
            cout << "  ";
        }

        // printing the star part
        for (int j = 0; j < starCount; j++) {
            cout << "* ";
        }

        // updating counters
        if (i < mid) {
            starCount += 2;
            blankCount--;
        }
        else {
            starCount -= 2;
            blankCount++;
        }

        cout << endl; 
    }
    return 0;
} 
