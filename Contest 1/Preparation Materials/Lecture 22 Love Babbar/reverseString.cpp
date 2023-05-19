//https://leetcode.com/problems/reverse-string/

#include<iostream>
#include<vector>
using namespace std;

//USING WHILE LOOP
class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0; 
        int e = s.size()-1;
        
        while(st<e){
            swap(s[st++], s[e--]);
        }
    }
    
};


//USING FOR LOOP
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        for(int i=0; i<n/2; i++){
            char temp = s[i];
            s[i] = s[n-i-1];
            s[n-i-1] = temp;
        }
    }
};