/*[1,3,5,6]  
            o/p
case 1: k=1  0 
case 2: k=5  2
case 3: k=2  1
case 4: k=7  4
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int>::iterator it;
    if((find(nums.begin(),nums.end(),target)!=nums.end()))
        it=find(nums.begin(),nums.end(),target);
    else
        it=lower_bound(nums.begin(),nums.end(),target);
    return it-nums.begin();
    }
};
