// this is the program used to build a calculator 
// using switch statements 
#include<iostream> 
#include<cmath>
using namespace std; 
int main() { 
    float number1, number2; 
    cout<<"enter number1: "; 
    cin>>number1; 
    cout<<"enter number2: "; 
    cin>>number2; 
    // now using logic to build the program using switch 
    char op; 
    cout<<"enter valid arithmetic operator: "; 
    cin>>op; 
    // check for valid operator 
    if (!(op == '+' || op == '-' || op == '*' || op == '/')){ 
        cout<<"invalid operator"<<endl; 
        return 1; 
    } 
    // now the switch statement 
    switch (op) { 
        case '+': 
            cout<<"summation: "<<number1 + number2<<endl; 
            break; 
        case '-': 
            cout<<"difference: "<<number1 - number2<<endl; 
            break; 
        case '*': 
            cout<<"product: "<<number1 * number2<<endl; 
            break; 
        // here is the logic made for making the round off 
        case '/': 
            cout<<"quotient: "<<round((number1 / number2)*pow(10,2))/pow(10,2)<<endl; 
            break; 
        default: 
            cout<<"not a valid case"<<endl; 
            break;  
    }
} 
