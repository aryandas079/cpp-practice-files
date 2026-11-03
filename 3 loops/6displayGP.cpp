// this is the program to print a GP 
#include<iostream> 
#include<cmath>
using namespace std;

int main() {
    int firstTerm, commonRatio, termsCount; 
    cout<<"enter first term: "; 
    cin>>firstTerm; 
    cout<<"enter common ratio: "; 
    cin>>commonRatio; 
    cout<<"enter number of terms: "; 
    cin>>termsCount; 
    // now the logic 
    for (int i = firstTerm; i < firstTerm * pow(commonRatio, termsCount); i *= commonRatio) 
        cout<<i<<endl; 
    return 0;
} 
