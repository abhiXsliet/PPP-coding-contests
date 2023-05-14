//https://leetcode.com/problems/jump-game-ii/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        
        int size = nums.size();

        int currReach = 0;
        int maxReach = 0;
        int jmpCnt = 0;

        for(int i=0; i<size-1; i++) {
            if(i+nums[i] > maxReach) {
                maxReach = i+nums[i];
            }

            if(i == currReach) {
                jmpCnt++;
                currReach = maxReach;
            }
        }
        return jmpCnt;
    }
};