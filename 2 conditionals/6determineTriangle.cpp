// this is the program to determine whether a figure is triangle or not 
// based on the input sides 
#include<iostream> 
using namespace std; 
int main() { 
    int sideA, sideB, sideC; 
    cout<<"enter sideA: "; 
    cin>>sideA; 
    cout<<"enter sideB: "; 
    cin>>sideB; 
    cout<<"enter sideC: "; 
    cin>>sideC; 
    // now making the logic of the program using conditionals 
    if ((sideA > 0 && sideB > 0 && sideC >0) &&
        (sideA + sideB > sideC && sideB + sideC > sideA && sideA + sideC > sideB)) 
        cout<<"given sides forms the sides of a triangle"<<endl; 
    else 
        cout<<"given sides doesn't form the sides of a triangle"<<endl;  
} 
