// this is the program to find out profit or loss 
#include<iostream> 
using namespace std; 
int main() { 
    float costPrice, sellPrice; 
    cout<<"enter cost price: "; 
    cin>>costPrice; 
    cout<<"enter selling price: "; 
    cin>>sellPrice; 
    if (costPrice > sellPrice) 
        cout<<"loss made: "<<costPrice - sellPrice<<endl; 
    else if (sellPrice > costPrice) 
        cout<<"profit made: "<<sellPrice - costPrice<<endl; 
    else 
        cout<<"no profit or loss made"<<endl; 
} 
