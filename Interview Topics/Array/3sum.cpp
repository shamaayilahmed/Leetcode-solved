/*
Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Notice that the solution set must not contain duplicate triplets.

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.size()==0) return;
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<pair<int,int>> pos;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0)
                    pos.push_back({i,j});
            }
        }
        for(auto p : pos){
            for(int i=0;i<rows;i++){
                matrix[i][p.second]=0;
            }
            for(int j=0;j<cols;j++){
                matrix[p.first][j]=0;
            }
        }
    }
};
