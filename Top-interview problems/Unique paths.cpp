/*
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?

Example 1:

Input: m = 3, n = 7
Output: 28


Example 2:

Input: m = 3, n = 2
Output: 3
Explanation:
From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Down -> Down
2. Down -> Down -> Right
3. Down -> Right -> Down
*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        int memo[m+1][n+1];
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(i==1 || j==1){
                    memo[i][j]=1;
                }
                else{
                    memo[i][j]=memo[i-1][j]+memo[i][j-1];
                }
            }
        }
        return memo[m][n];
    }
};
