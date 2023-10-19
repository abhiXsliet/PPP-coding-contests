// https://leetcode.com/problems/maximum-population-year/


#include <bits/stdc++.h>
using namespace std;


class Solution {
private:
    int solve_approach_1(vector<vector<int>>& logs) {
        int freq[101] = {101};
        int offset    = 1950;

        for (auto& log : logs) {
            int first  = log[0] - offset;
            int second = log[1] - offset;

            freq[first]++;
            freq[second]--;
        }

        int sum  = 0;
        int maxi = 0;
        int idx  = 0;

        for (int i = 0; i < 101; i++) {
            sum += freq[i];
            if (maxi < sum) {
                maxi = sum;
                idx  = i;
            }
        }

        return idx + offset;
    }

    // TC = O(N)
    // SC = O(101) ~ O(1)
    int solve_approach_1_optimal(vector<vector<int>>& logs) {
        int n = logs.size();
        
        int first = INT_MAX;
        int last  = INT_MIN;
        
        for (int i = 0; i < n; i++) {
            first = min (first, logs[i][0]);
            last  = max (last, logs[i][1]);
        }

        int size = last - first + 1;
        vector<int> freq(size, 0);

        // O(n * 100) = O(n)
        for (int i = 0; i < n; i++) {
            for (int year = logs[i][0]; year < logs[i][1]; year++) {
                freq[year - first] += 1;
            }
        }

        int maxi = INT_MIN;
        int earliestYr = 0;

        for (int i = 0; i < size; i++) {
            if (maxi < freq[i]) {
                maxi = freq[i];
                earliestYr = first + i;
            }
        }

        return earliestYr;
    }

public:
    int maximumPopulation(vector<vector<int>>& logs) {

        // return solve_approach_1(logs);

        return solve_approach_1_optimal(logs);
    }
};