// this is the program use to count the 
// total number of vowels in a program 
#include<iostream>
using namespace std;

int main() {
    string sentence; 
    cout<<"enter the sentence: "; 
    getline(cin, sentence); 
    // now counting the total number of vowels 
    int vowelCount = 0; 
    char vowels[] = {
        'a', 'e', 'i', 'o', 'u',
        'A', 'E', 'I', 'O', 'U'
    };
    for (int i = 0; i < sentence.length(); i++) { 
        for (int j = 0; j < sizeof(vowels)/sizeof(vowels[0]); j++) { 
            if (sentence[i] == vowels[j]) 
                vowelCount++; 
        } 
    } 
    // now printing the total number of vowels 
    cout<<"total vowel count: "<<vowelCount<<endl; 
    return 0; 
} 
