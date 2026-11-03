// this is the program used to print the pascal triangle 
// using functions, loops and patterns 
#include<iostream>
using namespace std;
int triangle(int x, int y); 
int factorial (int x); 
int main() {
    int side; 
    cout<<"enter side: "; 
    cin>>side; 
    // now making the pattern 
    for (int i = 0; i < side; i++) { 
        // making the spaces triangle 
        for (int j = side; j > i + 1; j--) { 
            cout<<" "; 
        } 
        // now making the valued triangle 
        for (int j = 0; j < i + 1; j++) { 
            cout<<triangle(i, j)<<" ";
        } 
        cout<<endl; 
    }
    return 0;
} 
triangle(int x, int y) { 
    int value = factorial(x) / (factorial(y) * factorial(x - y)); 
    return value; 
} 
factorial(int x) { 
    int value = 1; 
    for (int i = 0; i < x; i++) 
        value *= (i + 1); 
    return value; 
} 
