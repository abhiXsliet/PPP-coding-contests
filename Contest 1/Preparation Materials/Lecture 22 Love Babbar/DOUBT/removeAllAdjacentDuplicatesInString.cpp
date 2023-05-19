//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// ONLINE TEST AS IT IS

//wrong
#include<iostream>
using namespace std;

int main() {
    string s = "aabhisshek";

    for(int i=0; i<s.length(); i++) {
        cout << "check" << endl;
        if(s[i] == s[i+1]) {
            
            s.erase(s[i], s[i+1]);
        }else{
            return s[i];
        }
    }

    cout << "printing string" << s << endl;
}