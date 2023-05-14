// https://leetcode.com/problems/merge-intervals/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());

        int start = intervals[0][0];
        int end = intervals[0][1];

        for(int i=1; i<n; i++) {
            if(intervals[i][0] <= end) {
                //updating end when overlapping occurs
                end = max(intervals[i][1], end);
            }
            else{
                //updating ans when no overlapping occurs
                ans.push_back({start, end});
                //updting start
                start = intervals[i][0];
                //updating end
                end = intervals[i][1];
            }
        }
        //add the last interval to the ans
        ans.push_back({start, end});
        return ans;
    }
};