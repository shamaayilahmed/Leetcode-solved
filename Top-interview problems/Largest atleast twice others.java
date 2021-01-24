class Solution {
    public int dominantIndex(int[] nums) {
        int largest=-1,index=-1;
        for(int i=0;i<nums.length;i++){  //find largest and corresponding index
            if(nums[i]>largest){
                largest=nums[i];index=i;
            }
        }
        for(int j=0;j<nums.length;j++){
            if(nums[j]!=largest && nums[j]*2>largest){ //check for the condition
                return -1;
            }
        }
        return index;
    }
}
