// https://leetcode.com/problems/reverse-pairs/



#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // TC = O(N)
    // SC = O(N)
    void merge(vector<int>& nums, int low, int mid, int high) {
        int i = low;
        int j = mid + 1;

        int k = 0;
        vector<int> temp;

        while (i <= mid && j <= high) {
            if (nums[i] <= nums[j]) 
                temp.push_back(nums[i++]);

            else temp.push_back(nums[j++]);
        }

        while (i <= mid)  temp.push_back(nums[i++]);

        while (j <= high) temp.push_back(nums[j++]);

        // distorting the original array
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    // TC = O(N)
    // SC = O(1)
    int countPairs(vector<int> &nums, int low, int mid, int high) {
        int right = mid + 1;
        int cnt = 0;

        for (int i = low; i <= mid; i++) {
            while (right <= high && (long)nums[i] > (long)2 * nums[right])
                right++;

            cnt += (right - (mid + 1));
        }
        
        return cnt;
    }

    // O(log(N) * (N+N)) = O(2N*logN)
    // SC = O(N) + log(N) = O(N) -> space required for merging + recursive depth
    int mergeSort(vector<int>& nums, int low, int high) {
        int cnt = 0;
        if (low >= high) return cnt;

        int mid = low + (high - low) / 2;
        // O(log(N))
        cnt += mergeSort(nums, low, mid);
        cnt += mergeSort(nums, mid+1, high);
        // O(N)
        cnt += countPairs(nums, low, mid, high);
        // O(N)
        merge(nums, low, mid, high);

        return cnt;
    }
public:
    // O(log(N) * (N+N)) = O(2N*logN)
    // SC = O(N)
    int reversePairs(vector<int>& nums) {
        int n = nums.size();

        int low  = 0;
        int high = n - 1;

        return mergeSort(nums, low, high);
    }
};