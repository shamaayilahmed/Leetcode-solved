/*Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result=0,i=0,j;
        vector<int> lastIndex(256,-1);
        int strSize=s.size();
        for(j=0;j<strSize;j++){
            i=max(i,lastIndex[s[j]]+1);
            result=max(result,j-i+1);
            lastIndex[s[j]]=j;
        }
        return result;
    }
};
