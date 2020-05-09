/*Given a non-empty array of integers, return the third maximum number in this array. If it does not exist, return the maximum number.
The time complexity must be in O(n).

TWIST 
if its not in O(n) answer is straight forward by using stl, just remove duplicates ,sort array and return(nums.size()-3)
*/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first=INT_MIN,second=INT_MIN,third=INT_MIN;
         for(int i=0;i<nums.size();i++){
            if(nums[i]>first){
                first=nums[i];           //get the maximum
            }
        }
        unordered_set<int> s(nums.begin(),nums.end());
        if(nums.size()<3){
            return first;
        }
        
        for(int i=0;i<nums.size();i++){
            int current=nums[i];
            if(current==first){          //ignore when maximum is present
                continue;
            }else if(second<current){    //current element greater then second 
                third=second;
                second=current;
            }else if(third<current && nums[i]!=second){      //current element greater then third
                third=current;
            }
        }
        return third;
    }
};
