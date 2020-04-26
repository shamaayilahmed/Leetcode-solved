class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            int n=target-nums[i];
            if(hash.find(n)!=hash.end()) //if n is found return currrent index and hash value of correspondent
                return{hash[n],i};
            hash[nums[i]]=i;
        }
        return {};  //to return a object of the function
    }
};
