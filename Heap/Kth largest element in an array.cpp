Problem Description : Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

You must solve it in O(n) time complexity.
  
Link : https://leetcode.com/problems/kth-largest-element-in-an-array/


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int,vector<int>,greater<int>> minh;
        for(int i = 0; i < nums.size(); i++){
            minh.push(nums[i]);
            while(minh.size() > k)minh.pop();
        }
        return minh.top();
    }
};
