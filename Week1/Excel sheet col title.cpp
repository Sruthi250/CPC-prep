#include <iostream>
using namespace std;
void converttotitle(int colNumber) {
        string ans; 
        while (colNumber) {
            int n = (colNumber-1) % 26; 
            ans = (char)('A' + n) + ans; 
            colNumber = (colNumber-1)/26; 
        }
        cout<<ans; 
    }

int main()
{   long int colNumber;
    cin>>colNumber;
    converttotitle(colNumber);
}
