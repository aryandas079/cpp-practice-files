// this is the program to find the corresponding ASCII values for all alphabets and numbers 
#include<iostream> 
using namespace std; 
int main() { 
    // array of ASCII characters 
    char ascii[] = {
    ' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')',
    '*', '+', ',', '-', '.', '/', '0', '1', '2', '3',
    '4', '5', '6', '7', '8', '9', ':', ';', '<', '=',
    '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
    'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
    'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[',
    '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e',
    'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
    'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
    'z', '{', '|', '}', '~'}; 
    // taking string input 
    string input; 
    cout<<"enter input: "; 
    cin>>input; 
    // checking for exactly single character input 
    if (input.length() != 1) {
        cout << "Enter exactly one character." << endl;
        return 1;
    } 
    // converting string to single character 
    char character = input[0]; 
    // logic to check the corresponding ascii value 
    bool found;
    for (int i = 0; i < sizeof(ascii)/sizeof(ascii[0]); i++) { 
        if (character == ascii[i]) { 
            found = true; 
            break; 
        } 
    } 
    if (!found) { 
        cout<<"enter a valid ascii character"<<endl; 
        return 1;
    } 
    // printing out the values 
    cout<<"ASCII character: "<<(int) character<<endl; 
} 
