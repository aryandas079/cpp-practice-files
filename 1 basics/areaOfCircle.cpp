// this program is used to find the area of a circle for a given input radius 
#include<iostream> 
#include<cmath>
using namespace std; 
int main() { 
    cout<<"enter radius: "; 
    float radius; 
    cin>>radius; 
    // using area of circle formula 
    float area = round(3.14159 * radius * radius * pow(10,2))/ pow(10,2); 
    cout<<"area of circle: "<<area<<endl; 
} 
