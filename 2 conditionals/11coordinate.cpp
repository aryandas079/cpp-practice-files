// this is the program to locate the given coordinates 
// over a 2D cartesian coordinate plane 
#include<iostream> 
using namespace std; 
int main() { 
    int pointA, pointB; 
    cout<<"enter pointA: "; 
    cin>>pointA; 
    cout<<"enter pointB: "; 
    cin>>pointB; 
    // now the logic using conditionals 
    if (pointA > 0) { 
        if (pointB > 0) 
            cout<<"the given points lies in 1st quadrant"<<endl; 
        else if (pointB < 0) 
            cout<<"the given points lies in 4th quadrant"<<endl;
    } 
    else if (pointA < 0) { 
        if (pointB > 0) 
            cout<<"the given points lies in 2nd quadrant"<<endl; 
        else if (pointB < 0) 
            cout<<"the given points lies in 3rd quadrant"<<endl;
    } 
    else if (pointA == 0) { 
        if (pointB > 0) 
            cout<<"point lies in +Y axis"<<endl;     
        else if (pointB < 0) 
            cout<<"point lies in -Y axis"<<endl; 
        else 
            cout<<"point lies in origin"<<endl; 
    }
    else if (pointB == 0) { 
        if (pointA > 0) 
            cout<<"point lies in +X axis"<<endl;     
        else if (pointA < 0) 
            cout<<"point lies in -X axis"<<endl; 
        else 
            cout<<"point lies in origin"<<endl; 
    } 
} 
