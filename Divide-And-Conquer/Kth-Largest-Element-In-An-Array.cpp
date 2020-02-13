// Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.

#include<bits/stdc++.h>
using namespace std;
//Time Complexity: O(nlogn)
//Simplest approach is shown here, to avoid unnecessary complexity
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k ];
    }
};