/*Given a 2D binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.

Example:

Input:
[
  ["1","0","1","0","0"],
  ["1","0","1","1","1"],
  ["1","1","1","1","1"],
  ["1","0","0","1","0"]
]
Output: 6

*/

static const auto __ =[]()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return NULL;
}();
class Solution {
	public:
int maximalRectangle(vector<vector<char>>& matrix) {
  int rows = matrix.size();
  if(rows==0){
    return 0;
  }
  int columns = matrix[0].size();
  if(columns==0){
    return 0;
  }
  int result[rows][columns];
  int area = 0;
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < columns; j++){
      if(matrix[i][j]=='1'){
        if(j==0){
          result[i][j] = 1;
        }
        else{
          result[i][j] = result[i][j-1]+1;
        }
        int width = result[i][j];
        for(int k = i; k >= 0; k--){
          width = min(width,result[k][j]);
          area = max(area,width*(i-k+1));
        }
      }
      else{
        result[i][j] = 0;
      }
    }
  }
  return area;
}
};
