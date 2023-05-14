//https://www.hackerrank.com/contests/ppp-1-1676481916/challenges/is-palindrome-13-1


#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {
    int n = str.length();
    int i = 0; 
    int j = n-1;
    
    while(i<j){
        if(str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(isPalindrome(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
