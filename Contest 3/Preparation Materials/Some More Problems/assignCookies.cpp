// https://leetcode.com/problems/assign-cookies/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int i = 0;
        int j = 0;
        int cnt = 0;
        int n = g.size();
        int m = s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while(i<n && j<m) {
            if(s[j] >= g[i]) {
                cnt++;
                i++;
                j++;
            }
            else {
                j++;
            }
        }
        return cnt;
    }
};