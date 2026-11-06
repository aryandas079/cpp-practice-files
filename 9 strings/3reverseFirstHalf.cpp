// this is the code used to reverse the first half of the string
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string sentence;
    cout << "enter sentence: ";
    getline(cin, sentence);
    // Copy the original string first
    string reverseString = sentence;
    // Reverse from the start up to the middle
    reverse(
        reverseString.begin(),
        reverseString.begin() + reverseString.length() / 2
    );
    cout << "reverse string: " << reverseString << endl;
    return 0;
} 
