// this is the code used to print sum 
// using recursion 
#include<iostream>
using namespace std;
int loopSum(int x, int y) {
    if (y < x)
        return 0; 
    return y + loopSum(x, y - 1);
}
int main() {
    int firstNum, secondNum; 
    cout<<"enter 1st number: "; 
    cin>>firstNum; 
    cout<<"enter 2nd number: "; 
    cin>>secondNum; 
    // checking the edge case 
    if (firstNum > secondNum) { 
        cout<<"second number should be greater than first number"<<endl; 
        return 1; 
    }
    int sum = loopSum(firstNum, secondNum); 
    cout<<"Summation: "<<sum<<endl;  
    return 0;
} 
