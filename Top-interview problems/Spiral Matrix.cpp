/*
Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.

Example 1:

Input:
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
Output: [1,2,3,6,9,8,7,4,5]
*/

static const auto __ =[](){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    return NULL;
}();
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i = 0;
        int r = matrix.size()-1;
        if(r < 0)
            return {};
        int j = 0;
        int c = matrix[0].size()-1;
        vector<int> result;
        
        while(j <= c && i <= r)
        {
            for(int x = j; x <= c ; x++)
                result.push_back(matrix[i][x]);
            
            for(int x = i+1; x <= r ; x++)
                result.push_back(matrix[x][c]);
            
            if(i != r)
            {
                for(int x = c-1; x >= j; x--)
                    result.push_back(matrix[r][x]);
            }
            
            if(j != c)
            {
                for(int x = r-1; x > i; x--)
                    result.push_back(matrix[x][i]);
            }
            
            j++;
            i++;
            c--;
            r--;
        }
        return result;
    }
};
