/*
Accumulate the left and right products of the current index setting left and right as 1
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size=nums.size();
        vector<int> result(size,1);
        int left=1,right=1,i=0;
        
        while(i<size){
            result[i]*=left; left*=nums[i];
            result[size-i-1]*=right; right*=nums[size-i-1];
            i++;
        }
        return result;
    }
};
