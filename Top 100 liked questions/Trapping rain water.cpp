/*Given n non-negative integers representing an elevation map where the width of each bar is 1, 
compute how much water it is able to trap after raining.

The above elevation map is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. 
In this case, 6 units of rain water (blue section) are being trapped.

Example:

Input: [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
*/

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> leftMax(n,0);
        vector<int> rightMax(n,0);
        
        //leftMax[0]=height[0];
        //rightMax[n-1]=height[n-1];
        
        for(int i=1;i<n;i++){
            leftMax[i]=max(leftMax[i-1],height[i-1]);  //vector of maximum from left
        }
        for(int i=n-2;i>=0;i--){
            rightMax[i]=max(rightMax[i+1],height[i+1]);  //vector of maximum from right
        }
        int result=0;
        for(int i=0;i<n;i++){
            int test = min(leftMax[i],rightMax[i])-height[i];   //difference of minimum af left and right with current vector element
            if(test>0)
                result+=test;
        }
        return result;
        }
};
