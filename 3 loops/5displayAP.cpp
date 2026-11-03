// this is the code to show an AP 
#include<iostream>
using namespace std;

int main() {
    int firstTerm, commonDifference, termsCount; 
    cout<<"enter first term: "; 
    cin>>firstTerm; 
    cout<<"enter common difference: "; 
    cin>>commonDifference; 
    cout<<"enter number of terms: "; 
    cin>>termsCount; 
    // now the logic 
    for (int i = firstTerm; i < firstTerm + (termsCount) * commonDifference; i += commonDifference) { 
        cout<<i<<endl; 
    }
    return 0;
} 
