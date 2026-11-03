// this program is use to determine the greatest of three positive inputs 
// using conditionals 
#include<iostream> 
using namespace std; 
int main() { 
    int number1, number2, number3; 
    cout<<"enter number1: "; 
    cin>>number1; 
    cout<<"enter number2: "; 
    cin>>number2; 
    cout<<"enter number3: "; 
    cin>>number3; 
    // checking for positive inputs 
    if(!(number1 > 0 && number2 > 0 && number3 > 0)){ 
        cout<<"the inputs should be all positive"; 
        return 1; 
    } 
    // now the logic 
    if (number1 > number2) { 
        if (number1 > number3) 
            cout<<number1<<" is the largest"<<endl; 
        else 
            cout<<number3<<" is the largest"<<endl; 
    } 
    else { 
        if (number2 > number3) 
            cout<<number2<<" is the largest"<<endl; 
        else 
            cout<<number3<<" is the largest"<<endl;
    }
} 
