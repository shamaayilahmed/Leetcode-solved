/*
Given an m x n matrix. If an element is 0, set its entire row and column to 0. Do it in-place.

Follow up:

A straight forward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but still not the best solution.
Could you devise a constant space solution?
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
