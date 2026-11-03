// this is the program to calculate the simple interest 
#include<iostream> 
using namespace std; 
int main() { 
    float principal, rate, time; 
    cout<<"enter principal: "; 
    cin>>principal;
    cout<<"enter rate: "; 
    cin>>rate;
    cout<<"enter time: "; 
    cin>>time; 
    if (!(principal > 0 && rate > 0 && time > 0)){ 
        cout<<"negative values are not allowed for calculation of simple interest"<<endl; 
        return 1;
    }
    // now calculating simple interest  
    cout<<"simple interest: "<<(principal*rate*time)/100<<endl; 
} 
