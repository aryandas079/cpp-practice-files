// this is the code to print 1 to N 
// using recursions 
#include<iostream>
using namespace std;
void sequencePrint(int x) { 
    if (x < 1) 
        return;  
    sequencePrint(x - 1); 
    cout<<x<<" "; 
}
int main() {
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    sequencePrint(number); 
    cout<<endl; 
    return 0;
} 
