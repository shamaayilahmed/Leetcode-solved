class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()<k){
            for(int i=0;i<k;i++){
                    std::rotate(nums.begin(),nums.begin()+nums.size()-1,nums.end());
            }
            return;
        }
        std::rotate(nums.begin(),nums.begin()+nums.size()-k,nums.end());
    }
};
