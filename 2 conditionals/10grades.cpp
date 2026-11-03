// this is the program to determine the grades of a student using conditionals 
#include<iostream> 
using namespace std; 
int main() { 
    float marks; 
    cout<<"enter marks: "; 
    cin>>marks; 
    // now checking for valid input 
    if (!(marks > -1 and marks < 101)){ 
        cout<<"enter valid marks"<<endl; 
        return 1; 
    } 
    // now using conditionals 
    if (marks > 90) 
        cout<<"grade AA"<<endl; 
    else if (marks > 80) 
        cout<<"grade AB"<<endl; 
    else if (marks > 70) 
        cout<<"grade BB"<<endl; 
    else if (marks > 60) 
        cout<<"grade BC"<<endl; 
    else if (marks > 50) 
        cout<<"grade CC"<<endl; 
    else if (marks > 40) 
        cout<<"grade DD"<<endl; 
    else 
        cout<<"grade F"<<endl; 
} 
