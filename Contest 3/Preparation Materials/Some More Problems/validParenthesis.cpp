//https://leetcode.com/problems/valid-parentheses/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        
        stack<char>stack;

        for(int i=0; i<s.length(); i++) {
            
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                stack.push(s[i]);
            }
            else {

                if(!stack.empty())
                {
                    char ch = stack.top();
                    if( s[i] == ')' && ch == '(' || 
                        s[i] == ']' && ch == '[' || 
                        s[i] == '}' && ch == '{' ) 
                    {        
                        stack.pop();
                    }
                    else 
                    {
                        return false;
                    }                    
                }  
                else{
                    return false;
                }
            }
        }

        if(stack.empty()) {
            return true;
        }
        else{
            return false;
        }

    }
};