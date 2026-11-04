// this is the program used to calculate power  
// using logarithmic approach and recursions 
#include<iostream>
using namespace std;
int recursivePower(int x, int y) { 
    if (y == 0)
        return 1; 
    if (y % 2 == 0) { 
        return recursivePower(x, y/2) * recursivePower(x, y/2); 
    } else { 
        return x * recursivePower(x , y - 1); 
    }
}
int main() {
    int base, exponent; 
    cout<<"enter base: "; 
    cin>>base; 
    cout<<"enter exponent: "; 
    cin>>exponent; 
    // checking the edge cases 
    if (base < 1 || exponent < 0) { 
        cout<<"enter base and exponent greater than 0"<<endl; 
        return 1; 
    } 
    // now using the recursive approach for the power calculation 
    int value = recursivePower(base, exponent); 
    cout<<base<<"^"<<exponent<<" = "<<value<<endl; 
    return 0;
} 
