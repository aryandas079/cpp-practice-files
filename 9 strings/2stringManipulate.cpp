// this is the program used to manipulate the string 
// at even position using a certain character 
#include<iostream>
using namespace std;

int main() { 
    string sentence; 
    cout<<"enter sentence: "; 
    getline(cin, sentence); 
    // now taking input of the replacing character 
    char character; 
    cout<<"character: "; 
    cin>>character; 
    // now replacing even positions with the character 
    for (int i = 0; i < sentence.length(); i++) { 
        if (i % 2 == 0 && sentence[i] != ' ') 
            sentence[i] = character; 
    } 
    // now printing the output 
    cout<<"required manipulated sentence: "<<sentence<<endl; 
    return 0;
} 
