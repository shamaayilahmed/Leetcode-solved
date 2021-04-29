class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
  
        vector<int> result{-1,-1};
      
        for (int i = 0; i < nums.size(); i++) {
          if (target != nums[i])
              continue;
          if (result[0] == -1)
              result[0] = i;
          result[1] = i;
        }
      
        return result;
    }
};
