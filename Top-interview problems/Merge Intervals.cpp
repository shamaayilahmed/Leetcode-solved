/*
Given a collection of intervals, merge all overlapping intervals.

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
     vector<vector<int>> ans;

    if(intervals.size()==0)
        return ans;
    sort(intervals.begin(),intervals.end());

    ans.push_back(intervals[0]);
    int i;
    for(i=1;i<intervals.size();i++){             //compare the last element of current and next pairs
        if(ans[ans.size()-1][1]<intervals[i][0]){
            ans.push_back(intervals[i]);
        }
        else{
            ans[ans.size()-1][1]=max(ans[ans.size()-1][1],intervals[i][1]);
        }
    }
        return ans;
    }
};
