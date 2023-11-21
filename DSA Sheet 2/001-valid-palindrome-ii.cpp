// https://leetcode.com/problems/valid-palindrome-ii/



#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // TC = O(N)
    // SC = O(1)
    bool isPalindrome(string& s, int i, int j) {
        while (i < j) {
            if (s[i++] != s[j--])
                return false;
        }
        return true;
    }
    
    // TC = O(N)
    // SC = O(1)
    bool solve_optimal(string& s) {
        int n = s.length();

        int i = 0;
        int j = n - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                return isPalindrome(s, i+1, j) || 
                       isPalindrome(s, i, j-1);
            }
            i++, j--;
        }
        // "abc" handled here
        return true;
    }
public:
    bool validPalindrome(string s) {
        return solve_optimal(s);
    }
};