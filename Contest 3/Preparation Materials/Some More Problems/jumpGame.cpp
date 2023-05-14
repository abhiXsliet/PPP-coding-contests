//https://leetcode.com/problems/jump-game/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {

        int n = nums.size();
        int index = n-1;
        for(int i=n-1; i>=0; i--) {
            if(i+nums[i] >= index)
                index = i;
        }

        if(index == 0)
            return true;
        else 
            return false;
    }
};
