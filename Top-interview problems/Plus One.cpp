/*
Given a non-empty array of digits representing a non-negative integer, increment one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size=digits.size();
        
        while(size>0){
            if(digits[size-1]==9){
                if(size==1){
                    digits[size-1]=1;
                    digits.push_back(0);
                    return digits;
                }
                digits[size-1]=0;
                size--;
            }
            else{
                digits[size-1]+=1;
                break;
            }
        }
        return digits;
    }
};
