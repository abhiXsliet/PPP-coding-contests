// https://leetcode.com/problems/peak-index-in-a-mountain-array/


#include <bits/stdc++.h>
using namespace std;


class Solution {
private:
    int solve_brute(vector<int>& arr) {
        int index = -1;
        int maxi = INT_MIN;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] > maxi) {
                maxi = max(arr[i], maxi);
                if(maxi) {
                    index = i;
                }
            }
        }
        return index;
    }

    int solve_optimal(vector<int>& arr) {
        int n = arr.size()-1;
        int s = 0;
        int e = n-1;
        while(s < e) {
            int mid = s + (e - s)/2;
            if(arr[mid] < arr[mid+1]){
                s = mid + 1;
            }
            else {
                e = mid;
            }
        }
        return s;
    }
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        // return solve_brute(arr);

        return solve_optimal(arr);
    }
};

