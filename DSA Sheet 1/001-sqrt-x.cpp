// https://leetcode.com/problems/sqrtx/


#include <bits/stdc++.h>
using namespace std;


class Solution {
private:
    int solve_brute(int x) {
        int ans = 0;
        for (long long i = 1; i*i <= x; i++) {
            ans = i;
        }
        return ans;
    }

    int solve_optimal(int x) {
        int low = 0, high = x;
        int ans = 0;
        while(low <= high) {
            long long mid = low + (high - low) / 2;

            if (mid * mid == x) return mid;
            else if (mid * mid < x) {
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return ans;
    }
public:
    int mySqrt(int x) {
        // return solve_brute(x);

        return solve_optimal(x);
    }
};