/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int maxSo=nums[0];
      int current=nums[0],i;
        for(i=1;i<nums.size();i++){
            current=max(nums[i],current+nums[i]);
            maxSo=max(maxSo,current);
        }
        return maxSo;
    }
};
