// https://leetcode.com/problems/4sum/



#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // TC = O(N^3 * log(N))
    // SC = 2 * O(No. of Quadruples) -> one for set and one to return the answer
    vector<vector<int>> solve_better(vector<int>& nums, int tar) {
        int n = nums.size();

        // to store the unique no. of quadruplets
        set<vector<int>> st;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                
                set<long long> hset;
                
                for (int k = j + 1; k < n; k++) {
                    
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    long long new_tar = tar - sum;

                    if (hset.find(new_tar) != hset.end()) {
                        vector<int> temp = {nums[i], nums[j], nums[k], (int)new_tar};
                        sort(begin(temp), end(temp));
                        st.insert(temp);
                    }

                    hset.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> result (st.begin(), st.end());
        return result;
    }

    // TC = O(N^3)
    // SC = O(1) -> for algorithm and O(no. of quadruplets) for returning ans
    vector<vector<int>> solve_optimal(vector<int>& nums, int tar) {
        int n = nums.size();
        vector<vector<int>> result;

        sort(begin(nums), end(nums));

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                int k = j + 1; 
                int l = n - 1;

                while (k < l) {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];

                    if (sum == tar) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(begin(temp), end(temp));
                        result.push_back(temp);

                        k++;
                        l--;

                        while (k < l && nums[k] == nums[k - 1]) k++;
                        while (k < l && nums[l] == nums[l + 1]) l--;
                    }
                    else if (sum > tar) l--;
                    else k++;
                }
            }
        }
        return result;
    }
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // return solve_better(nums, target);

        return solve_optimal(nums, target);
    }
};