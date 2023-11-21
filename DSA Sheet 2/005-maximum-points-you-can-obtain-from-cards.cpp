// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/



#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // TC = O(N) since max(k) goes to 'n'
    // SC = O(1)
    // SLIDING WINDOW
    int solve_approach_1(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        
        int sum = 0;
        for (int i = n - k; i < n; i++) {
            sum += cardPoints[i];
        }
        
        int ans = sum;

        int j = n - k; 
        int i = 0;

        while (j < n) {
            sum -= cardPoints[j];
            sum += cardPoints[i];
            i++, j++;
            ans  = max(ans, sum);
        }

        return ans;
    }
public:
    int maxScore(vector<int>& cardPoints, int k) {
        return solve_approach_1(cardPoints, k);
    }
};