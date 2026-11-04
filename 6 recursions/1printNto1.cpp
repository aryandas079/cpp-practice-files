// this program is use to print 1 to n 
// using recursions 
#include<iostream>
using namespace std;
void loopPrint(int x) { 
    if (x < 1) 
        return;  
    cout<<x<<" "; 
    loopPrint(x - 1); 
}
int main() {
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    loopPrint(number); 
    cout<<endl; 
    return 0;
} 
