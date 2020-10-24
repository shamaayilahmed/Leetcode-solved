/*
Given a set of distinct integers, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.

Example:

Input: nums = [1,2,3]
Output:
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]
*/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> powerSet;
        for(int i=0;i<pow(2,nums.size());i++){
            vector<int> subset;
            for(int j=0;j<nums.size();j++){
                if(i&(1<<j)){
                    subset.push_back(nums[j]);
                }
            }
            if(find(powerSet.begin(),powerSet.end(),subset)==powerSet.end()){
                powerSet.push_back(subset);
            }
        }
        return powerSet;
    }
};
