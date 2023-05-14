//https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633

#include<bits/stdc++.h>
using namespace std;

bool isValid(char ch) {
    if( (ch>='a' && ch<='z') || 
        (ch>='0' && ch<='9') || 
        (ch>='A' && ch<='Z') ){
        return 1;
    }
    return 0;
}

char toLowerCase(char ch) {
    if( (ch>='a' && ch<='z') || 
        (ch>='0' && ch<='9') ){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a' ;
        return temp;
    }
}

bool isPalindrome(string s) {
    int st = 0;
    int e = s.size()-1;
    while(st < e) {
        if(s[st] != s[e]) {
            return 0;
        }
        else{
            st++;
            e--;
        }
    }
    return 1;
}

bool checkPalindrome(string s)
{
    //Removing extra characters
    int n = s.size();
    string temp = "";
    for(int i=0; i<n; i++){
        if(isValid(s[i])){
            temp.push_back(s[i]);
        }
    }

    //converting characters to lowercase
    int n2 = temp.size();
    for(int i=0; i<n2; i++) {
        temp[i] = toLowerCase(temp[i]);
    }

    //checking Palindrome
    return isPalindrome(temp);
}
