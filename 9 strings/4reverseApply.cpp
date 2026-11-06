// this program is use to solve this 
// Input a string of lergth greater than 5 and
// reverse the substring from position 2 to 5 using
// inbuilt functions 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string input; 
    cout<<"enter string: "; 
    getline(cin, input); 
    if (input.length() < 5) { 
        cout<<"minimum length of the string is 5"<<endl; 
        return 1; 
    } 
    int pos1, pos2; 
    cout<<"enter reverse postions one: "; 
    cin>>pos1; 
    cout<<"enter reverse postions two: "; 
    cin>>pos2; 
    // now reversing the string 
    reverse(input.begin() + pos1, input.begin() + pos2); 
    cout<<"reversed string: "<<input<<endl; 
    return 0;
} 
